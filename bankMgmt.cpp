#include<iostream>
#include<cstring>
using namespace std;

class BankMgmt{
    private:
        float total_amt ;
        int account_no ;
        string name;
    public:
        BankMgmt(){
            total_amt = 0.0;
            account_no = 0;
            name = "";
        }
        BankMgmt(float a , int b , string c){
            total_amt = a;
            account_no = b;
            name = c;
        }
        void create(){
            cout<<"enter account number :";
            cin>>account_no;

            cout<<"enter name of candidate :";
            cin>>name;

            cout<<"enter amount present : ";
            cin>>total_amt;
        }
        float amt_afterInterest(int r , int t){ 
            for(int i=0; i<t ;i++ ){
                total_amt = total_amt + (total_amt * r / 100);
                }
            return total_amt;
        }
        void deposit(){
            int a;
            cout<<"amount deposit : ";
            cin>>a;
            total_amt += a;
        }
        void withdraw(){
            int a;
            cout<<"amount withdraw : ";
            cin>>a;
            if(total_amt >= a)
                total_amt -= a;
            else
                cout<<"insufficient balance : "<<endl;
        }
        void display(){
            cout<<"customer's data :\n "<<"account number = "<<account_no<<"\nname = "<<name<<"\ntotal amount = "<<total_amt<<endl;
        }
};
int main(){
    BankMgmt bb;
    bb.create();
    int rate,time;
    cout<<"Enter rate and time : ";
    cin>>rate>>time;
    bb.deposit();
    bb.withdraw();
    
    cout<<bb.amt_afterInterest(rate,time)<<endl;
    bb.display();
    return 0;
}
