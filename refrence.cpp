#include<iostream>
using namespace std;
int &fun(){
    static int x=10;
    return x;
}

int main(){
           int x=10;
           int &ref=x;
           ref=20;
           cout<<"x= "<<x<<endl;
           x=30;
           ref=20;
           x=0;
           cout<<"ref= "<<ref<<endl;  
    }

