#include<iostream>
#include <algorithm>
using namespace std;
int main(){

  int arr[]={1,2,3,4,5,6,7};
  int k;
  int n =sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  cout<<" please enter the element number:";
  cin>>k;
  cout<<" Element value: "<<arr[k-1];

}
