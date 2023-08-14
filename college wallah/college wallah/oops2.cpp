#include<iostream.h>
using namespace std;
class fruit
{
   public:
    string name;
    string color;
    string shape;
    fruit()
    {
        name="apple";
        color="red";
        shape="round";
    }
    fruit(string shape, string size){
        // name=shape;
        shape=name;
        color=size;
    }

   } ;
   int main()
   {
    fruit x;
   cout<< x.name;
   fruit y;
   cout<<y.shape;
   }
