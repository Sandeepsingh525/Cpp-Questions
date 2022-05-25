#include <iostream>
using namespace std;
void AllPairsarray(int arr[],int n){
   for(int i=0;i<n;i++){
       int x=arr[i];
       for(int j=i+1;j<n;j++){
           int y=arr[j];
           cout<<x<<","<<y<<endl;
       }
       cout<<endl;
   }
}

int main() {
	int arr[5]={1,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"All Pairs:"<<endl;
    
    AllPairsarray(arr,n);
	return 0;
}