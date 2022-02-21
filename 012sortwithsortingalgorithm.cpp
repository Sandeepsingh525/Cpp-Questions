#include<iostream>
using namespace std;
void sort1(int arr[], int n){
   int lo=0;
   int mid=0;
   int hi=n-1;
   while(mid<=hi){
    switch(arr[mid]){
        case 0:
           swap(arr[mid++],arr[lo++]);
           break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid],arr[hi--]);
            break;
    }
   }

}

int main(){

 int arr[]={1,0,2,1,2,0,0};
 int n=sizeof(arr)/sizeof(arr[0]);
 sort1(arr,n);
 cout<<"sorted list: ";
 for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
 }
}
