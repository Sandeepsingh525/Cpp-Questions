#include<iostream>
#include <algorithm>
#include<set>
using namespace std;
int main()
{

    int arrA[]={10,2,50};
    int arrB[]={4,5,8,9,7};
    int nA=sizeof(arrA)/sizeof(arrA[0]);
    int nB=sizeof(arrB)/sizeof(arrB[0]);
    set<int> s;
    for(int i=0;i<nA;i++){
        s.insert(arrA[i]);
    }
     for(int i=0;i<nB;i++){
        s.insert(arrB[i]);
    }
    cout<<s.size()<<endl;
  for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr
             << " ";
}
