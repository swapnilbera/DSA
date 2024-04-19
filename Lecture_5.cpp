//fibonacci series
#include <iostream>
using namespace std;

int main(){
  int a=0;
  int b=1,n;
  cin>>n;
  for(int i=1;i<=n;i++){
     int nextnum=a+b;
     cout<<nextnum<<" ";
     a=b;
     b=nextnum;  
  }
  return 0;
}
