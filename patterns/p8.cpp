#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter the number of row:";
  
  cin>>a;

  int i = 1;
  while(i<=a){
    int j = 1;
    while(j<=a){
      char ch= 'A'+i+j-2;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}