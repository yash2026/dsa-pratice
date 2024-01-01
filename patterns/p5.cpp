#include<iostream>
using namespace std;

int main(){
  // A B C
  // B C D 
  // C D E
  int a;
  cout<<"Enter the number of rows:";
  cin>>a;
  int i=1;
  while(i<=a){
    int j = 1;
    // while(j<=a){
    while(j<=i){
      char ch='A'+i+j-2;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}