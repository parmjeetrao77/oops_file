#include <iostream>
using namespace std;
class Dimension
{
    int x , y;
public:
    Dimension()
    {
        x=0;
        y=0;
        cout<<"Default Constructor "<<"("<<x<<" , "<<y<<")"<<endl;
    }
    Dimension(int a , int b)
    {
        x=a;
        y=b;
        cout<<"Parameterized Constructor "<<"("<<x<<" , "<<y<<")"<<endl;
    }
    Dimension(Dimension &n)
    {
        x=n.x;
        y=n.y;
        cout<<"Copy Constructor "<<"("<<x<<" , "<<y<<")"<<endl;
    }
};
int main()
{
    Dimension n1;
    Dimension n2(10,15);
    Dimension n3(n2);
    return 0;
}