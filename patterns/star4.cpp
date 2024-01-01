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
  //     cout<<k;
  //     k++;
  //   }
  //     int start= i-1;
  //     while(start){
  //       cout<<start;
  //       start=start-1;
  //     }
  //   cout<<endl;
  //   i++;
  // }
  for(i=1;i<=a;i++){
    int p=1;
    for(int j=a-i;j;j--){
      
      cout<<p;
      p++;
    }
    for(int k=1;k<=i;k++){
      // cout<<"*";
      cout<<k;
    }
    int start= i-1;
    while(start){
      cout<<start;
      start=start-1;
    }
    cout<<endl;
  }
}