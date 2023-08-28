#include <iostream>
using namespace std;


// ! Function OverLoading 
class A {

    public:
    void sayHello(){
        cout << "Hello" << endl;
    };
    void sayHello(int n){
        cout << "Hello" << n << endl;
    };
    string sayHello(string name){
        cout << "Hello" << name << endl;
        return name;
    };
};

// ! Operator Overloading
class B {
    public:
    int a ;
    int b;

    public:
    int add(){
        return a + b;
    };

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;

        cout << "output " << value2 - value1 << endl;
    };

    void operator() (){
        cout << "This is bracket "<< endl;
    }
};


int main(){

    B obj1 , obj2 ;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    return 0;
}

