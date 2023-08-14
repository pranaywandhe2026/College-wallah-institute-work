#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int l=n%10;
    cout<<l<<endl;
    int i=1;
    int f;
    while(n>0){
         f=n%10;
        n=n/10;
        i++;
    }
    cout<<f;
}