#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) begin(v), end(v)
#define dbg(x) cerr << #x << " " << x << endl;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin>>n;
    vector<int> vec(n);
    for(auto &x: vec){
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}