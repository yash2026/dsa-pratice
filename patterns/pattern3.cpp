#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int a;
  cout<<"Enter the number of rows:";
  cin>>a;
  int i = 1;
  int count;

  while(i<=a){
    
    int j=1;
    while(j<=i)
    {
      /* code */
      cout<<(i+1)-j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}