/*
Data is hidden in the class. you can't directly access the private member variables like elem and sz. 

*/

#include<iostream>
#include<cmath>
#include"Vector.h"
using namespace std;

double sqrt_sum(Vector &v)
{
  double sum=0;
  for (int i=0;i!=v.size();++i){
    sum += sqrt(v[i]);
  }
  return sum;
}


int main()
{
  int no =0;
  double result = 0;
  cout<<"enter the total no you want to enter\n";
  cin>>no;
  Vector v(no);
  cout<<"ENTER VALUES FOR: "<<no<<"\n";
  for(int i=0;i!=v.size();++i){
    //cin>>v.elem[i]; // you can't do this, you can't modify private element here,but you need via fucntion
    cin>>v[i]; //you have called a public function to access the privaete variable
  }
 result = sqrt_sum(v);
  cout<<"sum of squar-root is: "<<result;
  return 0;
}
