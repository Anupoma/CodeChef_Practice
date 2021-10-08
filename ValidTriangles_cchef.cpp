#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int a, b, c; cin>>a>>b>>c;
        int sum=0;
        sum = a+b+c;
        if(sum==180) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
    return 0;
}
