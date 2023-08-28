#include <iostream> 
using namespace std;


int sum(int ar[],int s){

    int sums = 0;

    for(int i = 0; i<s;i++){
        sums += ar[i];
    }

    return sums;

}



int main(){
    int size ;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size] ;

    for (int i = 0; i<size; i++){
        cin >> arr[i];

    }

    cout <<"Sum of given array elements is: "<< sum(arr,size);
    
}