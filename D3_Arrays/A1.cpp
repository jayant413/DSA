#include <iostream> 
using namespace std;


void printArray(int arr[],int size){
       for(int i=0; i < size; i++){
        cout<<arr[i] << " ";
    }

    cout <<  endl;
     // for(int i: arr){
    //     cout<<arr[i] << " ";
    // } 
}

void printCh(char ar[],int size){
      for(int i=0; i < size; i++){
        cout<<ar[i] << " ";
    }
}



int main(){
    int arr[5] = {3,5,6};
    char ch[5] = {'a' ,'b','c'};

    printArray(arr,sizeof(arr)/sizeof(int));
    printCh(ch,5);




   return 0;
}