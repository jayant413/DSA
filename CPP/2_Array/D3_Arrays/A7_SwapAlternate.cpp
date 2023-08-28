#include <iostream> 
using namespace std;

void swapAternate(int arr[],int n){
     for(int i = 0; i < n; i += 2){
        if (i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0; i<n ; i++){
         cout << arr[i]<< " ";
    }
    cout<< endl;

}




int main(){
    int even[4] = {3,9,4,8};
    int odd[5] = {3,1,2,5,6};

    swapAternate(even,4);
    swapAternate(odd,5);
    
    return 0;
}



void nothing(){   // Swap internal working
    int i,temp;
    int arr[19];
    temp = arr[i];
    arr[i]= arr[i+1];
    arr[i+1] = temp;
}