#include <iostream> 
using namespace std;


int findUnique(int arr[],int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


int main(){
    int arr1[5] = {3,4,2,4,3};
    int arr2[5] = {7,1,8,7,8};

    cout << findUnique(arr1,5) << endl;
    cout << findUnique(arr2,5);
    
    return 0;
}