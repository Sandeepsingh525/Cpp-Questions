#include<iostream>
using namespace std;
int largesumsubarray(int arr[],int n){
     int maxsum=INT_MIN;
     int cursum=0;
     for(int i =0;i<n;i++){
            cursum=cursum+arr[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
     }
     return maxsum;


}


int main(){
 int arr[]={-1,-2,-3,-8,-4};
 int n=sizeof(arr)/sizeof(arr[0]);
 int result=largesumsubarray(arr,n);
 cout<<"sum: "<<result;
 }
