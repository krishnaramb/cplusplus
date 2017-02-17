/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  const int *i;
  i = &x;
  i++;
  cout<<*i;
  return 0;

}
