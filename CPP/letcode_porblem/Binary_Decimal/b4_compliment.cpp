#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int mask = 0, n;
    cin >> n;

    while(n!=0){
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;
}