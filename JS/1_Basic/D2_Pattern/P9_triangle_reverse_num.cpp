#include <iostream> 
using namespace std;

int main(){
    int i = 1, n;
    cin >> n;

    
    while(i<=n){
        int j = 0;
        while(j< i ){
          cout << i-j;
          j++;
        }
        cout << endl;
        i++;
    }
}