#include <iostream>
using namespace std;
void Rotatefn(int arr[],int n){
    int temp;
   
    for(int i=n-1;i>0;i--){
         temp=arr[i];
         arr[i]=arr[i-1];
         arr[i-1]=temp;
        }
    
        
    
}

void Rotateelement(int arr[] ,int n,int rt){
    for(int i=0;i<rt;i++){
        Rotatefn(arr, n);
    }
          for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[]={2,3,4,5,6,7,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rt;
    cin>>rt;
    //Rotatefn(arr,n);
    Rotateelement( arr ,n,rt);
  
    return 0;
}