#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<"Enter the number of rows:";
  cin>>num;

  int rows=1;
  while (/* condition */rows<=num)
  {
    /* code */
    int space=1;
    while(space<rows){
      cout<<" ";
      space++;
    }
    int star = 1;
    while (star<=num-rows+1)
    {
      /* code */
      // cout<<"*";
      cout<<rows;
      star++;
    }
    cout<<endl;
    rows++;
  }
}