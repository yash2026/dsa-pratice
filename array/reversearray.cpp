#include<iostream>
using namespace std;

void reverse(int arr[],int n){
  int start = 0;
  int end=n-1;

  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void printarray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[6] = {1,5,8,20,4,10};
  int brr[5] = {12,55,6,77,-1};

  reverse(arr,6);
  reverse(brr,5);

  printarray(arr,6);
  printarray(brr,5);

  return 0;
}