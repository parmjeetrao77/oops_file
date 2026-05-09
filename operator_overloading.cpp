#include <iostream>
using namespace std;
class complexNumber
{
    int x,y;
public:
    complexNumber(int a=0 , int b=0){
        x=a;
        y=b;
    }
    complexNumber operator+(complexNumber n){
        complexNumber nn;
        nn = x+n.x ;
        nn = y+n.y ;
        return nn;
    }
    complexNumber operator-(complexNumber n){
        complexNumber nn;
        nn.x = x-n.x ;
        nn.y = y-n.y ;
        return nn;
    }
    void operator++() { // pre-increment
        x = x+1 ;
        y = y+1 ;
    }
    bool operator==(complexNumber n){
        if(x == n.x && y == n.y)
            return true;
        else
            return false;
    }
    friend ostream& operator <<(ostream& output ,const complexNumber& cc) ;
    void display(){
        cout<<x<<" + i"<<y<<endl;
    }
};
ostream& operator <<(ostream& output ,const complexNumber& cc) {
    output<<"coordinates :"<<cc.x<<" + i"<<cc.y<<endl;
    return output;
}
int main()
{   int x,y,z,w;
    cout<<"enter coordinates : ";
    cin>>x>>y>>z>>w;
    complexNumber n1(x,y),n2(z,w),n3;

    n3=n1+n2;
    cout<<"Addition: ";
    n3.display();

    n3=n1-n2;
    cout<<"Subtraction: ";
    n3.display();

    ++n1;
    cout<<"Increment: ";
    n1.display();

    if(n1==n2)
    cout<<"Equal"<<endl;
    else
    cout<<"Not Equal"<<endl;
    
    cout<<n1 <<" & "<<n2<<endl;
    return 0;
}