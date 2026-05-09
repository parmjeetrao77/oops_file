#include <iostream>
using namespace std;
class Arithmetic{
    private :
        int a,b ;
    public :
        Arithmetic(int a,int b){
            this->a = a;
            this->b = b;
        }
        inline int add(){ 
            return a+b; 
        }
        inline int sub(){ 
            return a-b; 
        }
        inline int mul(){ 
            return a*b; 
        }
        inline float divi(){ 
            return (float)a/b; 
        }
        inline int mod(){
            return a%b ;
        }
};
int main(){
    int a , b ;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    Arithmetic aa(a,b);
    cout<<"Addition: "<<aa.add()<<endl;
    cout<<"Subtraction: "<<aa.sub()<<endl;
    cout<<"Multiplication: "<<aa.mul()<<endl;
    cout<<"Division: "<<aa.divi()<<endl;
    cout<<"Modulus: "<<aa.mod()<<endl;
    return 0;
}