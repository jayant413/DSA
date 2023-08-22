#include <iostream>
using namespace std;


class Student {
    private : 
    string name = "Jayant";
    int age = 20;
    int height = 170;

    public:
    string getName() { return this -> name; };
    int getAge() { return this -> age; };
    int getHeight() { return this -> height; };
};

int main(){
    Student first ;

    cout << "Student " << first.getName() << endl;
    cout << "Student " << first.getAge() << endl;
     cout << "Student " << first.getHeight() << endl;
}