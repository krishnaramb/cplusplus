/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

  int *const i = &x;  //you need to assign such statement. It will throw error if you don't assign

  *i=*i+1;  //valid, because value pointing to can be changed but pointer itself can't be changed to point to other variable
  i = &y; // error, i is the read only variable. You can't reassign it

  x++;
 cout<<*i;
  return 0;

}
