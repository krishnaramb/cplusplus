/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

const  int *const i = &x;  //you need to assign such statement. It will throw error if you don't assign

//  *i=*i+1;  //ERROR: assignment of read-only location (const int)
//  i = &y; // ERROR: assignment of read-only variable i in i=&y

  x++;
 cout<<*i;
  return 0;

}
