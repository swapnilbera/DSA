/*
  6
  1 2 3 4 5 6
  Elements Of Array:
  1 2 3 4 5 6 
  Elements Of Array After Reverse it:
  6 5 4 3 2 1
  */
#include<iostream>
using namespace std;
void rev(int arr[],int n){
  int start=0,end=n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
int main(){
  int size;
  cin>>size;
  int arr[100];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"Elements Of Array:"<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  rev(arr,size);
  cout<<"Elements Of Array After Reverse it:"<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
