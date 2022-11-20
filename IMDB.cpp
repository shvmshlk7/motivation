#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,s,r;
	cin>>t;
	while(t--)
	{
	        cin>>n>>x;
	        int rat=0,siz=0;
	        while(n--)
	        {
	                cin>>s>>r;
	                if(s<=x&&r>=rat)
	                {
	                        rat=r;
	                        siz=s;
	                }
	        }
	        cout<<rat<<endl;
	        
	}
	return 0;
}
