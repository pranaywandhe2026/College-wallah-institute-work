#include<iostream.h>
using namespace std;
class fruit
{
   public:
    string name;
    string color;
};
int main()
{
    fruit apple;
    apple.name="APPLE";
    apple.color="RED";
    cout<<apple.name<<" "<<apple.color;
    fruit mango;
    mango.color="YELLOW";
    cout<<mango.color;
    fruit *grapes=new fruit();
    grapes->color="green";
    cout<<grapes->color;

}