#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        if(a>b) cout<< a << " " << a+b << endl;
        else cout<< b << " " << a+b << endl;
    }
    return 0;
}
