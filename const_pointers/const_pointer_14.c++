/* Find out what will happen in this code? */

#include<iostream>
using namespace std;
int main() {
  int x = 5;
  int y = 10;

const  int  *i; //Now location is const with respect to the pointer i
i = &x;
//(*i)++;  //fails, becoz location is const wrt i

int *j = i; // what is wrong here?? Invalid conversion from const int to int
//(*j)++; // if line 13 had been ok, this line will be ok,, since line 13 says location pointed by j is not const
const *j = i;  // this is ok,,

//  *i=*i+1;  //ERROR: assignment of read-only location (const int)
//  i = &y; // ERROR: assignment of read-only variable i in i=&y

  x++;
 cout<<*i;
  return 0;

}
