#include <iostream>
using namespace std;
int main() {
  int i,j;
  for(int i=0;i<9;i++) {
    if(i%3==0) {
      cout << "+---+---+---+" << endl;
    }
    for(int j=0;j<9;j++) {
      if(j%3==0) {
        cout << "|";
      }
      cout << "#";
      if(j==8) {
        cout << "|";
      }
    }
    cout << endl;
    if(i==8) {
      cout << "+---+---+---+" << endl;
    }
  }
  return 0;
}