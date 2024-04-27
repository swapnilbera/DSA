//binary search

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,8,9,10,14};
    int k,count=0;
    cin>>k;
    int left=0,right=sizeof(arr)/sizeof(int);
    while(left<=right){
       int mid=left+(right-left)/2;
      //  int mid=(left+right)/2;
        if(arr[mid]==k){
            cout<<"KEY FOUND IN "<<mid;
            count++;
            break;
        }
        else if(arr[mid]<k)
            left=mid+1;
        else
            right=mid-1;
    }
    if(!count)
        cout<<"NOT FOUND....";
    return 0;
}
