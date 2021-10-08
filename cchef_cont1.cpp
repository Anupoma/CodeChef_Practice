#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int a1,a2,a3, b1,b2,b3, A=0, B=0;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        if(a1==1){
            A++;
        }
        if(a2==1){
            A++;
        }
        if(a3==1){
            A++;
        }


        if(b1==1){
            B++;
        }
        if(b2==1){
            B++;
        }
        if(b3==1){
            B++;
        }

        if(A==B){
            cout << "Pass" << endl;
        }
        else{
            cout << "Fail" << endl;
        }
    }
    return 0;
}

