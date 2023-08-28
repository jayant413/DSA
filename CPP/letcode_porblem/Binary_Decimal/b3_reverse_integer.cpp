#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int ans =0,i=0,n;
    cin >> n;

    while (n != 0)
    {
        int digit = n%10;
        if((ans > INT8_MAX/10 )|| (ans < INT8_MIN/10)){
            cout<< 0;
            break;
        }
        ans = ans * 10 + digit;
        n = n/10;
    }
    cout << ans;
}