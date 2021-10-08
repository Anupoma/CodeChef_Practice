#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
    optimize();
   /* int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int sz= unique(v.begin(), v.end())-v.begin();
    cout<<sz<<endl;
    for(int i=0; i<sz; i++){
        cout<<v[i] << endl;
    }
    cout<< endl;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    */

    int rev=0, num, t, temp;
    cin>>t;
    while(t--){
        cin>>num;
        while(num!=0){
            temp = num%10;
            rev = rev*10 + temp;
            num = num/10;
        }
        cout<<rev << endl;
        rev = 0;
    }

    return 0;
}
