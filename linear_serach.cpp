#include<iostream>
using namespace std;
int ls(int arr[],int n,int key){
    int op=-1;
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        op= i;
    }
    }
    return op;
}
int main(){
 int arr[]={2,3,4,5,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 int key;
 cin>>key;
 int in=ls(arr,n,key);
if(in!=-1){
    cout<<"value matches at "<<key;
}else{
    cout<<key<<" not found";
}

}
