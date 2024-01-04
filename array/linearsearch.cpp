#include<iostream>
using namespace std;

bool search(int arr[],int size,int find){
  for(int i=0;i<size;i++){
    if(arr[i]==find){
      return true;
    }
  }
  return false;
}

int main(){
  int find;
  cout<<"Enter the element to search for:";
  cin>>find;
  int arr[5]={76,12,5,-1,55};
  bool ans = search(arr,5,find);
  if(ans){
    cout<<"True";
  }
  else{
    cout<<"False";
  }
  return 0;
}