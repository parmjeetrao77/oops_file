#include <iostream>
#define PI 3.14159
using namespace std;
class Shape{
    public:
        virtual void area()=0;   // pure virtual function
};
class Circle : public Shape{
        float r;
    public:
        Circle(float x)
        {
            r=x;
        }
        void area()
        {
            cout<<"Area of Circle: "<<PI*r*r<<endl;
        }
};
int main()
{
    Circle c(5);
    c.area();
    return 0 ;
}