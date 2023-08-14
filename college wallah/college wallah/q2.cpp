#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int i=1;
    int sum=0;
    int m;
    while(n>0){
        m=n%10;
        if(m%2!=0){
            sum=sum+m;
            
        }
        n=n/10;
    }
    cout<<"sum="<<sum;
}
