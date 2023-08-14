#include<iostream.h>
using namespace std;
class Employee
{
public:
    int eID;
    string eName="harry";

    void printName();
};


void Employee::printName()
{
    
    cout << eName << endl;
}
int main(){
    Employee x;
    x.Employee();
}