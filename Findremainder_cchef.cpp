#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a, b, t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ans=a%b;
        cout<<ans<<endl;
    }
    return 0;
}
