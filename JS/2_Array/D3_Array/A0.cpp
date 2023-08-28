#include <iostream>
using namespace std;


void printArray (int arr[], int size){

    for(int i ; i<size ; i++){
        cout << arr[i] << " ";
    }

    cout << "Printing done";

}


int main(){
    int n = 10;
    int num[n] = {4,1,25,18,5};

    printArray(num,n);
}