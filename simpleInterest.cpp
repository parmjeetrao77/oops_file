#include <iostream>
using namespace std;
class simpleInterest{
    private:
        float p,r,t;
    public:
        simpleInterest(float p,float r=5,float t=1)
        {
        this->p = p;
        this->r = r;
        this->t = t;
        }
        float SI(){
            return float(p*r*t)/100 ;
        }
        void display(){
            cout<<"Simple interest = "<<SI()<<endl;
        }
};
int main()
{   float p,r,t;
    cout<<"enter data : ";
    cin>>p>>r>>t;
    simpleInterest s1(p),s2(p,r),s3(p,r,t);
    cout<<"SI (p): "<<s1.SI()<<endl;
    s1.display();
    cout<<"SI (p,r): "<<s2.SI()<<endl;
    s2.display();
    cout<<"SI (p,r,t): "<<s3.SI()<<endl;
    s3.display();
    return 0;
}
