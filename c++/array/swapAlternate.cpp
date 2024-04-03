#include <iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
    }
    
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
   int arr[]={1,4,0,5,-2,15};
   int brr[]={2,6,3,9,4};
   
swapAlternate(arr,6);
swapAlternate(brr,5);
   
   printArray(arr,6);
   printArray(brr,5);

    return 0;
}