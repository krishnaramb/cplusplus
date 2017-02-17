#include<iostream>
using namespace std;
int main() {
 const int i =1;
  i++; //error, increment of read-only variable
  cout<<i;
  return 0;

}
