/*
  4
  1111
   222
    33
     4
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
      //space print
      int space=i-1;
      while(space){
        cout<<" ";
        space--;
      }
      //number print
      int number=n+1-i;
      while(number){
        cout<<i;
        number--;
      }
      cout<<endl;
      i++;
  }
}
*/
/*
  3
    1
   22
  333
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
      //space print
      int space=n-i;
      while(space){
        cout<<" ";
        space--;
      }
      //number print
      int number=i;
      while(number){
        cout<<i;
        number--;
      }
      cout<<endl;
      i++;
   }
}
*/
/*
  4
  1234
   234
    34
     4
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
      //space print
      int space=i-1;
      while(space){
        cout<<" ";
        space--;
      }
      //number print
      int number=n+1-i;
      int x=i;
      while(number){
        cout<<x++;
        number--;
      }
      cout<<endl;
      i++;
  }
}
*/
/*
  4
     1
    23
   456
  78910
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n) {
      //space print
      int space=n-i;
      while(space){
        cout<<" ";
        space--;
      }
      //number print
      int number=i;
      while(number){
        cout<<count++;
        number--;
      }
      cout<<endl;
      i++;
   }
}
*/
/*
  5
  1234554321
  1234**4321
  123****321
  12******21
  1********1
*/
/*
#include <iostream>
using namespace std;
int main() {
  int row=1;
  int n;
  cin>>n;
  while(row<=n){
    //print digit of 1st triangle
    int digit1=n+1-row;
    int x=1;
    while(digit1){
      cout<<x++;
      digit1--;
    }

    //print star of 2nd triangle
    int star=2*(row-1);
    while(star){
      cout<<"*";
      star--;
    }

    //print digit of 3rd triangle
    int digit2=n+1-row;
    int y=n+1-row;
    while(digit2){
      digit2--;
      cout<<y--;
    }
    row++;
    cout<<endl;
  }
}
*/
