#include<iostream>
using namespace std;
int main(){
  int dost[10];
  int fake[10]={1};
  for(int i=0;i<10;i++){
    cin>>dost[i];
    // dost[i]=i+1;
    // cout<<dost[i];
    // cout<<" ";
  }

  for(int i=0;i<10;i++){
    cout<<dost[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<10;i++){
    cout<<fake[i]<<" ";
  }
  // int arr[3]={1,2,3};
}