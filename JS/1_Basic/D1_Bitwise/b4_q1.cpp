#include <iostream>
using namespace std;


int main(){
    int n ;
    cin >> n;

    int sum = 0, pro = 1;
    while (n!=0)
    {
       int digit = n%10;
       pro = pro * digit;
       sum = sum + digit;

       n = n/10;
    }
    cout << "Product is "<< pro << endl;
    cout << "Sum is "<< sum;
    
}