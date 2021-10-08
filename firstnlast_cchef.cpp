#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,t,sz;
    vector<int>v;
    cin>>t;
    while(t--){
        cin>>n;
        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }
        sz = v.size();
        cout<< v[0] + v[sz-1] << endl;
        v.clear();
    }
    return 0;
}
