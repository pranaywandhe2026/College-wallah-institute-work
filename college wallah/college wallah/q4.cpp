#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int i=1;
    int sum=0;
    int r;
    cout<<"reverse=";
    while(n>0){
        r=n%10;
        
        cout<<r;
        sum=sum+n%10;
        n=n/10;
        i++;
    }
    cout<<"\n";
   cout<<"sum="<<sum;
}