#include <iostream>
using namespace std;
// containership -> one class contains objects of another class as its data members.
class Engine{
public:
    void start(){
        cout<<"Engine Started"<<endl;
    }
};
class Car{
    private:
        Engine e;
    public:
        void startCar(){
            e.start();
            cout<<"Car Started"<<endl;
        }
};
int main()
{
    Car c;
    c.startCar();
    return 0 ;
}