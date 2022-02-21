#include<iostream>
using namespace std;
int main(){
   int arr[]={2,3,4,-1,5,-6};
   int n=sizeof(arr)/sizeof(arr[0]);
   int i=-1;
   int pivot=0;
   for(int j=0;j<n;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
        }
   }
   cout<<"list:";
   for(int j=0;j<n;j++){
    cout<<" "<<arr[j];
   }
}
