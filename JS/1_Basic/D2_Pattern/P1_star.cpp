#include <iostream> 
using namespace std;

int main(){
    int  i = 1 ,n ;
    cin >> n;

  
    // for(int i = 1; i<=n; i++){ 
    //     for(int j=1; j<=n;j++){cout << " * ";}
    //     cout << " " << endl;
    // }

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}