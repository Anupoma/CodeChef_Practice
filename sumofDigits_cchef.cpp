#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int t;
    cin>>t;
    while(t--){
       long n, sum=0;
       cin>>n;
       while(n>0){
        sum += n%10;
        n/=10;
       }
       cout<<sum<<endl;
    }
    cout<< endl;
}
