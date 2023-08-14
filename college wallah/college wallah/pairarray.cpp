#include<iostream.h>
#include<limits.h>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
       
        
    }
    for(int i=0;i<=6;i++){
         if(smax<arr[i] && arr[i]<max){
            smax=arr[i];
        }
    }
     
    cout<<max<<endl;
    cout<<smax<<endl;
}