#include <iostream>
using namespace std;

class Human {

    private:
    int age;

    public:
    int height;
    int weight;

    int getAge() { return this -> age; }
    void setAge(int a) { this -> age = a; }
    void setWeight(int w) { this -> weight = w; }

};
 
class Male : protected Human{
    public : 
    string color;

    void check(){
        cout << "Male Class" << endl;
    }
};

int main(){

    Male m1;
    
    m1.setAge(20);
    cout << m1.getAge() << endl;


    return 0;
}

