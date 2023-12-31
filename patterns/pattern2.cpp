#include<iostream>

using namespace std;

int main(){
  int a,i=1;
  cout<<"Enter the number of rows:";
  cin>>a;
  while(i<=a){
    int j=0;
    while(j<i){
      cout<<"*";
      j++;
    }
    i++;
    cout<<endl;
  }
}