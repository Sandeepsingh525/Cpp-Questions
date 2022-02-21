#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,3,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int Max=0 ,Min=0 ;
    int i;
    if(n%2==0){
        if(arr[0]>arr[1]){
            Max=arr[0];
            Min=arr[1];
        }else{
           Max=arr[1];
           Min=arr[0];
        }i=2;
    }else{
    Max=arr[0];
    Min=arr[0];
    i=1;
    }
    while(i<n-1){
            if(arr[i]>arr[i+1]){
                if(arr[i]>Max ){
                    Max=arr[i];

                }
                if(arr[i+1]<Min){
                    Min=arr[i+1];
                }
            }

                else{
                if(arr[i+1]>Max ){
                    Max=arr[i+1];
                }
                if(arr[i]<Min){
                    Min=arr[i];
                }
            }
                i=i+2;
        }
    cout<<"MAX value->"<<Max<<endl ;
    cout<<"MIN value ->"<<Min;



}
