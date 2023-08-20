#include <iostream>
using namespace std;

int main(){
    int i = 1, n;
    cin >>  n;

    int a = 0;

    while(i<=n){
        int j = 1;
        
        while(j<=n){
            char ch = 'A' + a  ;
            cout << ch << " ";
            a++;
            j ++;
        }
        cout << endl;
        i++;
    }
}