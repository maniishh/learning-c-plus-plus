#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v){
    cout<<"size:"<<v.size() <<endl;
    for(int i=0 ; i<v.size();++i){
        //v.size()--> O(1)
        cout<<v[i]<<" "<<endl;
    }
}

int main(){
     vector<int> v(10,3);
      
        v.push_back(7);
        v.push_back(6); //input in vector //O(1)
           printVec(v);
        v.pop_back();
     printVec(v);
}