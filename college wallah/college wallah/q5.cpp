#include <iostream>
using namespace std;

int main() {
	
	    int x;
	    cin>>x;
	    if(x%10==0) {
	        int a=x/10;
	        cout<<a<<endl;
	    }
	   else if(x%10!=0){
	       int a=x/10;
	       int b=x%10;
	       if(b%5==0){
	           int c=b/5;
	           cout<<(a+c)<<endl;
	       }
	   } 
	   else cout<<-1<<endl;
	    return 0;
	}
	

