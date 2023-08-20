#include <iostream> 
using namespace std;

bool search(int arr[],int size,int key){ for(int i = 0; i < size; i++){
    if(arr[i] == key){return 1;}
} 
return 0;
}







int main(){
    int arr[10] {3,9,2,5,6};

    int key;
    cout<< "Enter a element to search: ";
    cin >> key;


    bool found = search(arr,10,key);

    if(found){cout<<"Key is present";}
    else{cout<<"Key is absent";}

}