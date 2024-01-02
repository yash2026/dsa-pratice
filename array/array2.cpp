#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getMax(int num[],int n){
  int max = INT_MIN;
  for(int i = 0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;
}
int getMin(int num[],int n){
  int mini = INT_MAX;
  for(int i = 0;i<n;i++){
    mini = min(mini,num[i]); 
  }
  return mini;
}
int main(){
  int size;
  cin>>size;
  int num[100];
  for(int i=0;i<size;i++){
    cin>>num[i];}
  cout<<"Maximum Value is: "<<getMax(num,size)<<endl;
  cout<<"Minimum Value is: "<<getMin(num,size);
  return 0;
}