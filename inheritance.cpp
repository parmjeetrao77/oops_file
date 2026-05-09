#include <iostream>
using namespace std;
class A {   // base class
    public:
        void showA(){
            cout<<"Class A is base class "<<endl;
        }
};
class B : public A {  // single inheritance
public:
    void showB(){
        cout<<"Single inheritance : Class B derived from A"<<endl;
    }
};
class C : public B  { // multi-level inheritance
public:
    void showC(){
        cout<<"Multi-level inheritance : Class C derived from B"<<endl;
    }
};
class D : public A { // hierarchial inheritance
public:
    void showD(){
        cout<<"Hierarchial inheritance : Class C derived from B"<<endl;
    }
};
class E {  // another base class
public:
    void showE(){
        cout<<"Class E is another base class"<<endl;
    }
};
class F : public A , public E { // multiple inheritance
public:
    void showF(){
        cout<<"Multiple inheritance : Class F derived from class A and E"<<endl;
    }
};
class G : public C,public E{ // hybrid inheritance
    public:
        void showG(){
                cout<<"Hybrid inheritance : Class G derived from class C and E"<<endl;
            }
};
int main()
{
     cout<<"Single Inheritance"<<endl;
    B obj1;
    obj1.showA();
    obj1.showB();

    cout<<"\nMultilevel Inheritance"<<endl;
    C obj2;
    obj2.showA();
    obj2.showB();
    obj2.showC();

    cout<<"\nHierarchical Inheritance"<<endl;
    D obj3;
    obj3.showA();
    obj3.showD();

    cout<<"\nMultiple Inheritance"<<endl;
    F obj4;
    obj4.showA();
    obj4.showE();
    obj4.showF();

    cout<<"\nHybrid Inheritance"<<endl;
    G obj5;
    obj5.showA();
    obj5.showB();
    obj5.showC();
    obj5.showE();
    obj5.showG();

    return 0;
}