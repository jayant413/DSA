#include <iostream>
using namespace std;


int getMax(int num[],int n){
    int maxi = -1000 ;
    
    for(int i = 0; i <n; i++){
        maxi = max(maxi,num[i]);
    }

    return maxi;
}

int getMin(int num[],int n){
    int mini = 1000 ;

    for(int i =0 ; i < n; i++){
        mini = min(mini,num[i]);
    }
    
    return mini;
}

int main(){
    int size;
    cout << "Enter size of arr: ";
    cin >> size;

    int arr[100];

    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }

    //  for(int i=0; i < size; i++){
    //     cout<<arr[i] << " ";}


    cout <<"Minimum value of array is : " << getMin(arr,size)<< endl;
    cout << "Maximum value of array is:  " << getMax(arr,size) << endl;


    return 0;
}