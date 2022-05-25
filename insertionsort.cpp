#include <iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v){
  for(int i=1;i<v.size()-1;i++){
      int cur=v[i];
      int prev=i-1;
      while(prev>=0 and v[prev]>cur){
          v[prev+1]=v[prev];
          prev=prev-1;
      }
      v[prev+1]=cur;
  }
    
}
int main()
{
   vector<int> v={-2,-4,-5,2,7,1} ;
   insertionSort(v);
   for(auto x:v){
       cout<<x<<" ";
   }

    return 0;
}
