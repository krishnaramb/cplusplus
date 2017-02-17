/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  const int *i;
  i = &x;
  //*i=*i+1;    //you are not able to change the value of x via *i,
  x++;          //but you can change via x. Nothing is stopping you to do this
  cout<<*i;
  return 0;

}
