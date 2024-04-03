 #include<iostream>
#include<limits.h>
using namespace std;
int getmax(int arr[],int size)
{
int max=INT_MIN;
for(int i=0;i<size;i++){
if(arr[i]>max){
max=arr[i];
}

}
return max;
}
int getmin(int arr[],int size)
{
int min=INT_MAX;
for(int i=0;i<size;i++){
if(arr[i]<min){
min=arr[i];
}

}
return min;
}
int main()
{
  int number[10]={2,5,8,3,10,1,9,6,21,12};
cout<<getmin(number,10)<<endl; 
cout<<getmax(number,10);
return 0;
}

