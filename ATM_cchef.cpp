#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    int W;
    float B;
    cin>> W >> B;
    if(W+0.50 > B){
        cout<< B;
    }
    else if(W%5 != 0){
        cout<< B;
    }
    else cout<< B-W-0.50;
    cout<<endl;
}
