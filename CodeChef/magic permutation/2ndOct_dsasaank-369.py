#include<bits/stdc++.h>
#define ll long long
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
#define y1 hfjskghsdjkfg
using namespace std;
const int N=100005;
pll t[N*4];
int n,Q,a[N],b[N];
int posi[N];
pll operator +(const pll &a,const pll &b){
	return pll(a.fi+b.fi,a.se+b.se);
}
void build(int k,int l,int r){
	t[k]=pll(0,0);
	if (l==r) return;
	int mid=(l+r)/2;
	build(k*2,l,mid);
	build(k*2+1,mid+1,r);
}
void change(int k,int l,int r,int x,int y,pll v){
	if (l==x&&r==y){
		t[k]=t[k]+v;
		return;
	}
	int mid=(l+r)/2;
	if (y<=mid) change(k*2,l,mid,x,y,v);
	else if (x>mid) change(k*2+1,mid+1,r,x,y,v);
	else{
		change(k*2,l,mid,x,mid,v);
		change(k*2+1,mid+1,r,mid+1,y,v);
	}
}
pll ask(int k,int l,int r,int p){
	if (l==r) return t[k];
	int mid=(l+r)/2;
	if (p<=mid) return ask(k*2,l,mid,p)+t[k];
	return ask(k*2+1,mid+1,r,p)+t[k];
}
void insert(int q,int v,int dif){
	int p=posi[v]; swap(p,q);
	if (p<=q){
		change(1,0,n-1,0,n-q,pll(dif,dif*(q-p)-dif*0));
		if (p!=1) change(1,0,n-1,n+1-q,n+p-1-q,pll(-dif,dif*(p-1)+dif*(n+1-q)));
		if (p!=q) change(1,0,n-1,n+p-q,n-1,pll(dif,dif*0-dif*(n+p-q)));
	}
	else{
		change(1,0,n-1,0,p-q,pll(-dif,dif*(p-q)+dif*0));
		if (p!=n) change(1,0,n-1,p-q+1,n-q,pll(dif,dif*1-dif*(p-q+1)));
		if (q!=1) change(1,0,n-1,n-q+1,n-1,pll(-dif,dif*(p-1)+dif*(n-q+1)));
	}
}
void solve(){
	scanf("%d%d",&n,&Q);
	build(1,1,n);
	For(i,1,n) scanf("%d",&a[i]);
	For(i,1,n) scanf("%d",&b[i]);
	For(i,1,n) posi[a[i]]=i;
	For(i,1,n) insert(i,b[i],1);
	int shi=0;
	For(i,1,Q){
		int tp,x,y;
		scanf("%d%d",&tp,&x);
		if (tp==1) shi=(shi+n-x)%n;
		else{
			scanf("%d",&y);
			insert(x,b[x],-1);
			insert(y,b[y],-1);
			swap(b[x],b[y]);
			insert(x,b[x],1);
			insert(y,b[y],1);
		}
		pll tmp=ask(1,0,n-1,shi);
		printf("%lld\n",1ll*tmp.fi*shi+tmp.se);
	}
}
int main(){
	int T;
	scanf("%d",&T);
	while (T--) solve();
}