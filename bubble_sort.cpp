#include <iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int t=1;t<n;t++){
        for(int j=0;j<n-t;j++){
            if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
        }
        }
    }
}
int main()
{
   vector<int> v={-2,-4,-5,2,7,1} ;
   bubbleSort(v);
   for(auto x:v){
       cout<<x<<" ";
   }

    return 0;
}