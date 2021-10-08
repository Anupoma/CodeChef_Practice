#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    bool flag = false;
    string s; cin>>s;
    for(ll i=0, j=1; i<s.size()-1; i++, j++){
        if(s[i]==s[j]){
            flag = true;
        }
    }
    if(flag) cout<< "Bad" << endl;
    else cout<< "Good" << endl;
}
