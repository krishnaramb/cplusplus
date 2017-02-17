/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

  const int  const * i ;  //error, duplicate const
  i = &x;
  //*i=*i+1;     //you can't do this
  i = &y;    //Can you point to any other variable

  x++;
  cout<<*i;
  return 0;

}
