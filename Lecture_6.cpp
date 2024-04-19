//decimal to binary
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0,i=0;
  while(n!=0){
    int bit=n&1;
    n=n>>1;
    ans=bit*pow(10,i)+ans;
    i++;
  }
  cout<<ans;
  return 0;
}
*/

//decimal to binary for -ve numbers

/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x;
  cin>>x;
  int n=-1*x;
  int ans=0,i=0;
  while(n!=0){
    int bit=n&1;
    n=n>>1;
    ans=bit*pow(10,i)+ans;
    i++;
  }
  int newans=~ans+1;
  cout<<newans;
  return 0;
}
*/

//binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0,i=0;
  while(n!=0){
    int bit=n%10;
    if(bit==1){
      ans+=pow(2,i);
    }
    n=n/10;
    i++;
  }
  cout<<ans;
  return 0;
}
