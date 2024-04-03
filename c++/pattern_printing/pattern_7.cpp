#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     int row=1;
   
     while(row<=n){
         int cols=1;
         int value =row;
         while(cols<=row){
             cout<<value<<" ";/*if we print row-cols+1 output will be same*/
             value--;
              cols++;
         }
         cout<<endl;
         row++;
     }

    return 0;
}
