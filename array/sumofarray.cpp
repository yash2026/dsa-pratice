#include<iostream>
using namespace std;
int sum(int arr[],int size){
  int sum=0;
  for(int i=0;i<size;i++){
    sum = sum+arr[i];
  }
  return sum;
}
int main(){
  int arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }

  cout<<sum(arr,5);
}