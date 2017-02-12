/*
Note1:
note that assignment of value with {} and without = is only  possible during inital initialiation.
for example
int p;
p{2}; //fails
p = {2};//ok

int  q{3}; //ok (initialization)

Note2: Learn how to write the inline constrcutor definition

Note3: Learn the operator ovoerloading for suspection[], eg [2]

Note3: For operator ovoerloading,  we are not returning the r-value here but l-vlaue(which has address).
thats why we are able to assign sth to the return value of a function

check if you remove the reference symbol & from the operator-overloading function, you will get error at
like v[0] = 50; saying lvalue required on left operand

Note: we have not yet included the destructor here, error handling in the Vector is not considered

Pls see class_intro2.c++ which discusses modularity and expectional handling

*/

#include<iostream>
using namespace std;

class Vector{
public:
  //note that constrcutor doesn't have a return type
Vector(int s):elem{new double[sz]},sz{s}{}
double & operator[](int i){return elem[i];}
int size(){return sz;}


private:
  double *elem;
  int sz;


};

double read_and_sum(int s){
  Vector v(s);
  cout<< "enter "<<s<<" numbers\n";
  for (int i=0;i!=v.size();++i){
    cin>>v[i] ;
  }
  double sum =0;
  for (int i=0;i!=v.size();++i){
    sum+=v[i];
  }
  return sum;

}

int main(){
  Vector v(10);// create a vector object of 10 element
  v[0] = 50; // see its possible(due to operator-overloading)
  int size=0;
  cout<<v.size()<<"\n";
  cout<<v[0]<<"\n";
 cout <<"-----------------------\n";
 cout<< "enter how many number you want to enter";
 cin>> size;
 cout <<"sum of the number entered is: "<<read_and_sum(size);

  return 0;
}
