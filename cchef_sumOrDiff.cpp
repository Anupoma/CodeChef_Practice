#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n1, n2;
    cin>>n1>>n2;
    if(n1>n2) cout<< n1-n2 << endl;
    else cout << n1+n2 << endl;
    return 0;
}
