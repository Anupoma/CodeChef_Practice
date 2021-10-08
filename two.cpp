#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        long long int n, p=0;
        cin>>n;
        if(n >= 250){
            p = n/250;
        }
        cout<<p<<endl;
    }
}
