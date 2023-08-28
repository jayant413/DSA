#include <iostream>
using namespace std;

void update(int arr[],int n){
    cout << "Inside the function" <<endl;

    arr[1] = 34 ;

      for(int i= 0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    int arr[3] = {3,5,2};

    for(int i: arr){
        cout << arr[i];
    }
    cout << endl;
    update(arr,3);

    for(int i= 0; i<3; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
