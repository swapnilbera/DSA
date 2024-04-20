/*6
1 2 3 4 5 6
Printing The elements of the array: 
1 2 3 4 5 6 Printing The elements After Alteration: 
2 1 4 3 6 5 
*/
/* #include <bits/stdc++.h>
using namespace std;
void swap_altr(int arr[],int size){
    int i=0,j=i+1;
    if(size==1||size==0)
        return;
    while(j< size && i<size){
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
}
int main() {
    // Write C++ code here
   int size;
   cin>>size;
   int arr[100];

   for(int i=0;i<size;i++){
       cin>>arr[i];
   }
   cout<<"Printing The elements of the array: "<<endl;
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
   swap_altr(arr,size);
    cout<<"Printing The elements After Alteration: "<<endl;
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
*/
//sort 0,1
#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}
