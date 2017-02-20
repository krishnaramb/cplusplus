/*
post_increment:
> l-value: going in
> r-value: coming out

pre-increment:
> l-value: going in
> l-value: coming out



*/



#include<iostream>

using namespace std;

int main(){
  int i =3,j,k,l;

  k = ++i;
  j = i++;
  l = i;
  cout << "value of k: "<<k<<"\n"; //4
  cout << "value of j: "<<j<<"\n"; // 4
  cout << "value of l: "<<l<<"\n"; // 5



  //Now lets examine about the r and  l value for these operators
  l++ = j;  //ERROR: post increment returns r-value
  cout << "value of l: "<<l<<"\n"; //



  ++j = 10; //OK; pre-increment returns l-value
  cout << "value of j: "<<j<<"\n"; //

  cout <<++j<<"\n";
  cout <<j++<<"\n";

  cout<<++j++<<"\n";// ERROR: why is this not OK??

  cout<<++++j<<"\n";  // why this is ok?

  cout<<j++++<<"\n"; //ERROR: why this is not OK? imp
  cout <<&++j<<"\n"; //OK, sicne ++j returns the l-vlaue ( which has address)
  cout <<&j++<<"\n"; //ERROR: j++ returns r-value so it has no address
  cout <<&2<<"\n"; // ERROR: 2 doesn't have any address..its r-value

  cout << &(i+j); //ERROR:

  ++(i+j); //ERROR: (i+j) returns r-value.. it is same as ++2,,, and 3++ ; in both l values should go

  return 0;
}


/* visualization of ++ operators

int post_increment++(int & x){   --> extra one tmp variable plus return the r-value
  int tmp = x;
  x = x+1;
  return tmp

}


int & ++pre-increment(int &x){ --> no need of tmp variable plus it returns a l-value
  x =x +1;
  return x;
}

*/
