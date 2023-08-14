#include <iostream>
using namespace std;

int main() {
	
	
	    int x;
	    cin>>x;
        cout<<"x=";
	    if(x%3==0) cout<<0<<endl;
	    else if(x%3!=0)
	    {
	        for(int i=1;i<=2;i++)
	        {
	            if((x+i)%3==0) cout<<(x+i)-x<<endl;
	        }
	    }
	
	return 0;
}
