#include<iostream>
using namespace std;
void printarray(int arr[],int size){
  cout<<"Print array:"<<endl;
  for(int i = 0;i<size;i++){
    arr[0]=1;
    arr[8]=2000;
    cout<<arr[i]<<" ";
  }
  cout<<" done."<<endl;

}

int main(){
  int hey[10];
  int yash[15];
  printarray(hey,10);
  printarray(yash,15);
}