#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
int main()
{
    optimize();
    ll n, k;
    cin>> n>> k;
    ll cnt = 0;
    while(n--){
        ll t = 0;
        cin>>t;
        if(t%k==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

/*
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
*/
