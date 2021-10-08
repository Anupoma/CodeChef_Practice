#include <iostream>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int fac=1;
	    for(int i=2;i<= n;i++)
	    {
	        fac*=i;
	    }
	    cout<<fac<<endl;
	}
	return 0;
}
