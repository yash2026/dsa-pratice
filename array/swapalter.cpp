#include<iostream>
using namespace std;

void alterswap(int arr[],int size){
  for(int i=0;i<size;i+=2){
    if(i+1<size){
      swap(arr[i],arr[i+1]);
    }
  }
}

void printarray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[5] = {5,6,2,5,1};
  alterswap(arr,5);
  printarray(arr,5);
}