// #include <iostream>
// using namespace std;
// int main()
// {
//     int choice;
//     float amount;
//     cout<<"1. INR to USD"<<endl;
//     cout<<"2. USD to INR"<<endl;
//     cout<<"Enter choice: ";
//     cin>>choice;
//     cout<<"Enter amount: ";
//     cin>>amount;
//     switch(choice)
//     {
//         case 1:
//         cout<<"USD: "<<amount/83<<endl;
//         break;
//         case 2:
//         cout<<"INR: "<<amount*83<<endl;
//         break;
//                 default:
//         cout<<"Invalid Choice";
//     }
//     return 0 ;
// }
#include <iostream>
using namespace std;

class CurrencyConverter
{
private:
    float amount;

public:
    void getAmount()
    {
        cout << "Enter amount in INR: ";
        cin >> amount;
    }

    void toUSD()
    {
        cout << "Amount in USD = " << amount / 83.0 << endl;
    }

    void toEUR()
    {
        cout << "Amount in EURO = " << amount / 90.0 << endl;
    }

    void toGBP()
    {
        cout << "Amount in POUND = " << amount / 105.0 << endl;
    }

    void toJPY()
    {
        cout << "Amount in YEN = " << amount * 1.80 << endl;
    }
};

int main()
{
    CurrencyConverter c;
    int choice;

    do
    {
        cout << "\n----- Currency Converter Menu -----\n";
        cout << "1. Convert INR to USD\n";
        cout << "2. Convert INR to EURO\n";
        cout << "3. Convert INR to POUND\n";
        cout << "4. Convert INR to YEN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >=1 && choice <=4)
            c.getAmount();

        switch(choice)
        {
            case 1:
                c.toUSD();
                break;

            case 2:
                c.toEUR();
                break;

            case 3:
                c.toGBP();
                break;

            case 4:
                c.toJPY();
                break;

            case 5:
                cout << "Exiting Program...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}