#include<iostream>
using namespace std;
class Area
{
        float length,breadth;
    public:
        Area(float l,float b)
        {
            length=l;
            breadth=b;
        }
        void display()
        {
            cout<<"Area = "<<length*breadth<<endl;
        }
};
int main()
{
    float l,b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    Area obj(l,b);
    obj.display();
    return 0;
}