/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

  int *const i;   //error: uninitialized i

  i = &x;
  *i=*i+1;
  i = &y;

  x++;
  cout<<*i;
  return 0;

}
