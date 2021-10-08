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
        int p, itemPrice=2048, count=0;
        cin>>p;
        while(p>0){
            count += p/itemPrice;
            p %= itemPrice;
            itemPrice /= 2;
        }
        cout << count << endl;
    }
    return 0;
}
