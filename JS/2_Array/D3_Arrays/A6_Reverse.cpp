#include <iostream> 
using namespace std;

void reverse(int arr[],int n){

   for(int i=0;i<n/2;i++){
      swap(arr[i],arr[n-i-1]);
   }

   for(int i=0;i<n;i++){
     cout << arr[i] << " ";
   }
}

int main(){
   int n=4;
   int a = 5;
   int even[n] = {3,9,2,6}; 
   int odd[a] = {3,9,8,5,1};
   reverse(even,n);
   cout << " \n";
   reverse(odd,a);
}