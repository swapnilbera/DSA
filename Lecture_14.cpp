//Finding Pivot element in a rotated Array-------LOVE BABBAR lecture 14 code
//Pivot element is in INDEX no.: 4
#include<iostream>
using namespace std;
int findpivot(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
    }
    return e;
}

int main(){
    int arr[]={3,8,10,17,1};
    cout<<"Pivot element is in INDEX no.: "<<findpivot(arr,5)<<endl;
    return 0;
}
