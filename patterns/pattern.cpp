#include<iostream>
using namespace std;
 int main(){
  int a;
  cout<<"Insert a number:";
  cin>>a;
  for(int i = 1;i<=a;i++){
    for(int j = 1;j<=a;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
 }