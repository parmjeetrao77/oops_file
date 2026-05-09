#include <iostream>
# define PI 3.14
using namespace std;
class Shapes_properties{
    public:
    // return type or argument must be different
        int sum(int a,int b)
        {
            return a+b;
        }
        double sum(double a, double b){
            return a+b;
        }
        float area(float r)
        {
            return PI*r*r;
        }
        float area(float l,float b)
        {
            return l*b;
        }
        float volume(float s)
        {
            return s*s*s;
        }
        float volume(float r,int h){
            return PI*r*r*h;
        }
};
int main()
{   
    Shapes_properties ss;
    cout<<"Sum: "<<ss.sum(5,4)<<endl;
    cout<<"Sum: "<<ss.sum(54.67,43.0)<<endl;
    cout<<"Area of Circle: "<<ss.area(5.9)<<endl;
    cout<<"Area of Rectangle: "<<ss.area(5,6.6)<<endl;
    cout<<"Volume of Cube: "<<ss.volume(3.5)<<endl;
    cout<<"Volume of Cylinder: "<<ss.volume(3.5,10)<<endl;
    return 0 ;
}