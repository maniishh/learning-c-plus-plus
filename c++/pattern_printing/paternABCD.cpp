 #include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
      int row=1;
     while(row<=n){
         int cols=1;
        
         while(cols<=n){
             char ch='A' + row-1;
             cout<<ch;
              cols++;
         }
         cout<<endl;
         row++;
     }

    return 0;
}
