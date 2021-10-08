#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int fact=1;
        for(int i=1; i<=n; i++){
            fact*=i;
        }
        cout<<fact<<"\n";
    }
    return 0;
}
