#include<iostream>
using namespace std;
class rectangle{
    public:
    rectangle(int l,int b){
        int area=l*b;
        cout<<area<<endl;;
    }

    void display(){
        cout<<"ajay devgan";
    }
};
int main(){
   rectangle x(10,20);
    rectangle y=x;
    y.display();
}