#include <bits/stdc++.h>
using namespace std;
#define f1(i, a, b) for (int i = a; i <= b; i ++)
#define pb push_back
#define ll long long

#define N 100005


ll f[N<<2];
int c[N<<2];

void push_down(int seg) {
	if (f[seg] || c[seg]) {
		f[seg<<1] += f[seg];
		c[seg<<1] += c[seg];
		f[seg<<1|1] += f[seg];
		c[seg<<1|1] += c[seg];
		f[seg] = c[seg] = 0;
	}
	return;
}
void update(int l, int r, int a, int C, int L, int R, int seg) {
	if (l <= L && R <= r) {
		f[seg] += a;
		c[seg] += C;
		return;
	}
	push_down(seg);
	int mid = L + R >> 1;
	if (l <= mid) update(l, r, a, C, L, mid, seg<<1);
	if (mid < r) update(l, r, a, C, mid+1, R, seg<<1|1);
	return;
}
ll query(int pos, int L, int R, int seg) {
	if (L == R) return 1ll*c[seg]*L+f[seg];
	push_down(seg);
	int mid = L + R >> 1;
	if (pos <= mid) return query(pos, L, mid, seg<<1);
	return query(pos, mid+1, R, seg<<1|1);
}

int n;
int a[N], b[N];
int pa[N], pb[N];

struct data {
    int L, R;
    int a, c;
    data(int L = 0, int R = 0, int a = 0, int c = 0) : L(L), R(R), a(a), c(c) {}
} ;

vector <data> v[N];

void update(vector <data> &v, int d) {
    for (auto x : v) {
		if (x.L > x.R) continue;
		update(x.L, x.R, d*x.a, d*x.c, 0, n-1, 1);
    }
}

vector <data> get(int P, int Q) {
	vector <data> res;
    if (P >= Q) {
		res.pb(data(0, P-Q, P-Q, -1));
		res.pb(data(P-Q+1, P-1, Q-P, 1));
        res.pb(data(P, n-1, n-Q+P, -1));
    }
    else {
        res.pb(data(0, P-1, Q-P, 1));
        res.pb(data(P, P+n-Q, n-Q+P, -1));
        res.pb(data(P+n-Q+1, n-1, Q-n-P, 1));
    }
    return res;
}

int main() {
    int T, Q;
    for (scanf("%d", &T); T --; ) {
        scanf("%d %d", &n, &Q);
        memset(f, 0, sizeof f);
        memset(c, 0, sizeof c);
        f1(i, 1, n) {
        	scanf("%d", &a[i]);
            pa[a[i]] = i;
        }
        f1(i, 1, n) {
        	scanf("%d", &b[i]);
            pb[b[i]] = i;
        }
        vector <data> V;
        f1(i, 1, n) {
			v[i] = get(pa[i], pb[i]);
            update(v[i], 1);
        }
        int now = 0;
        while (Q --) {
            int type;
            scanf("%d", &type);
            if (type == 1) {
                int z;
                scanf("%d", &z);
                now += z;
                if (now >= n) now -= n;
            }
            else {
                int x, y;
                scanf("%d %d", &x, &y);
                update(v[b[x]], -1);
                update(v[b[y]], -1);
                swap(b[x], b[y]);
                v[b[x]] = get(pa[b[x]], x);
                v[b[y]] = get(pa[b[y]], y);
                update(v[b[x]], 1);
                update(v[b[y]], 1);
            }
            ll ans = query(now, 0, n-1, 1);
            printf("%lld\n", ans);
        }
    }

	return 0;
}
