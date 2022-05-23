#include <iostream>
using namespace std;
int myarray(int arr[],int n,int key){
int s=0;
int e=n-1;
while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[s]>key){
        e=mid-1;
    }else{
        s=mid+1;
    }

}
  return -1;
}
int main() {
	int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int in=myarray(arr,n,key);
    if(in!=-1){
        cout<<key<<" found";
    }else{
        cout<<key<<" not found";
    }
	return 0;
}

