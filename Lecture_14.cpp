//Finding Pivot element in a rotated Array-------LOVE BABBAR lecture 14 code
//Pivot element is in INDEX no.: 4
/*
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
*/



//Finding Square Root with Precision
//ip----37
//Square Root is: 6.08
#include<iostream>
using namespace std;
int floorSqrt(int n)
{
    int s=0,e=n,ans=-1;
    while(s<=e){
        long long  int mid=s+(e-s)/2;
        long long int sq=mid*mid;
        if(sq==n)
            return mid;
        else if(sq>n)
            e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
double acc_squrt(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int x;
    cin>>x;
    int tempsol=floorSqrt(x);
    cout<<"Square Root is: "<<acc_squrt(x,2,tempsol);
    return 0;
}
