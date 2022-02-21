#include <iostream>
using namespace std;
void reverrsee(int arr[],int start,int End){
while(start<End){
    int temp;
    temp=arr[start];
    arr[start]=arr[End];
    arr[End]=temp;
    start++;
    End--;
}
}
void Print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Print(arr,n);
    reverrsee(arr,0,n-1);
    cout<<endl<<"reverse list: ";
    Print(arr,n);

}
;
