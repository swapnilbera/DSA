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
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[6]={1,0,0,1,1,0};
    int i=0;
    int j=5;
    while(i<j){
      if(arr[i]==0)
          i++;
      if(arr[j]==1)
          j--;
      if(arr[i]==1 && arr[j]==0)
          swap(arr[i],arr[j]);
    }
  for(int k=0;k<6;k++){
    cout<<arr[k]<<" ";
  }
  
  
    return 0;
}
