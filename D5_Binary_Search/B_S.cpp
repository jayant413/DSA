#include <iostream>
using namespace std;

// Montonic function 
// Only for Increasing or decreasing  


// Time Complexity  :  O(log n)

int BinarySearch(int arr[],int size , int key){

    int start = 0;
    int end = size -1;
    // int mid = start + (end  - start)/2;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid +1;
        }
        else{end = mid-1;}
        mid = (start+end)/2;
        // int mid = start + (end  - start)/2;
    }

    return -1;
     

}



int main (){

    int even[6] = {3,4,9,11,25,35};
    int odd[5] = {5,9,17,21,34};

    int indexEven = BinarySearch(even,6,35);
    int indexOdd = BinarySearch(odd,5,34);
    cout << indexEven << endl;
    cout << indexOdd << endl;

    return 0;
}
