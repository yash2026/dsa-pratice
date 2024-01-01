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
    char ch='A'+a-i;
    while(j<=i){
      
      cout<<ch<<" ";
      ch++;
      j++;
    }
    cout<<endl;
    i++;
  }
}