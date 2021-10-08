#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    optimize();
    int t;
    cin>>t;
    //cin>>n;
    while(t>0){
        int n;
        cin>>n;
        int flag = 0;
        while(n>0){
            int digit = n%10;
            if(digit>0 || flag){
                printf("%d", n%10);
                flag=1;
            }
            n/=10;
        }
        t--;
    }
    return 0;
}
