#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
    optimize();
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        int n; cin>>n;
        if(n<10) cout<< "Thanks for helping Chef!" << endl;
        else cout<<-1 << endl;
    }
    return 0;
}
