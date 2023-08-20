#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2){
        cout << "if"<<endl;
    }
    else{cout << "else"<< endl;}

    cout << a << " " << b ;
}