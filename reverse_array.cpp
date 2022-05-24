#include <iostream>
using namespace std;
void rvarray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main() {
	int arr[5]={1,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"In Reverse order ";
    rvarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}