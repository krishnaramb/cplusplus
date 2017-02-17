/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

  const int *i;   // this and the below are same
//  int  const *i ;  //this and the above one are same....Pls don't confuse on this one, remove one of them
  i = &x;     //i is non-const variable. you can assign it as many times as you want
 *i=*i+1;    //ERROR: you can't do this because location is const
  i = &y;     //Can you point to any other variable; Now qustion is can you change the new location value?
  (*i)++;    //ERROR: increment of read-only location i
  x++;
  cout<<*i;
  return 0;

}
