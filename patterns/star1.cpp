#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter the number of rows:";
  cin>>a;
  int i=1;
  // while(i<=a){
  //   int space=a-i;
  //   while(space){
  //     cout<<" ";
  //     space--;
  //   }
  //   int k=1;
  //   while(k<=i){
  //     cout<<'*';
  //     k++;
  //   }
  //   cout<<endl;
  //   i++;
  // }
  for(i=1;i<=a;i++){
    for(int j=a-i;j;j--){
      cout<<" ";
    }
    for(int k=1;k<=i;k++){
      // cout<<"*";
      cout<<i;
    }
    cout<<endl;
  }
}