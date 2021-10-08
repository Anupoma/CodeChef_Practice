#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,i;
	cin>>n;
	int a[n];
	int cl=0,count=0;
	for( i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	        count++;
	    else
	        cl++;
	}
	if(count>cl) cout<<"READY FOR BATTLE"<<endl;
	else cout<<"NOT READY"<<endl;


	return 0;
}
