/*
  4
  * 
  * * 
  * * * 
  * * * *
*/
/* #include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<"* ";
      j=j+1;
    }
    i+=1;
    cout<<endl;
  }
  return 0;
}
*/

/*
  4
  1
  22
  333
  4444
*/
/*
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<i;
      j=j+1;
    }
    i+=1;
    cout<<endl;
  }
  return 0;
}
*/

/*
  4
  1 
  2 3 
  3 4 5 
  4 5 6 7 
*/
/*
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int count=i;
    int j=1;
    while(j<=i){
      cout<< count++ <<" ";
      j=j+1;
    }
    i+=1;
    count--;
    cout<<endl;
  }
  return 0;
}
*/
//-----------WITHOUT USING COUNT-------------------  
/* 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i + j - 1 << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/

/*
  4
  1 
  2 1 
  3 2 1 
  4 3 2 1 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        int count=i;
        while (j <= i) {
            cout << count-- << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  4
  A A A A 
  B B B B 
  C C C C 
  D D D D 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1; 
        char count='A'-1;
        while (j <= n) {
            cout << (char)(count+i) << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  3
  A B C 
  A B C 
  A B C 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1; 
        char count='A'-1;
        while (j <= n) {
            cout << (char)(count+j) << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  3
  A B C 
  D E F 
  G H I 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
  char count='A';
    while (i <= n) {
        int j = 1; 
        while (j <= n) {
            cout << (char)(count++) << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  3
  A B C 
  B C D 
  C D E 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
      char count='A'-1+i;
        int j = 1; 
        while (j <= n) {
            cout << (char)(count++) << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/* 
  3
  A 
  B B 
  C C C 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
      char count='A'-1+i;
        int j = 1; 
        while (j <= i) {
            cout << count << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  4
  A 
  B C 
  C D E 
  D E F G 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
      char count='A'-1+i;
        int j = 1; 
        while (j <= i) {
            cout << count++ << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/
/*
  4
  D 
  C D 
  B C D 
  A B C D 
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n) {
      char count='A'-i+n;
        int j = 1; 
        while (j <= i) {
            cout << count++ << " ";
            j = j + 1;
        }
        i += 1;
        cout << endl;
    }
    return 0;
}
*/

