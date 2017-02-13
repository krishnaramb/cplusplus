


/*
1. The constructor of the class should do all the error-handling stuffs
2. example. what if there is error in memory allocation ie new operator could not assign
that much of memroy space requested
3. what if the user trys to constrcut the obj with negative values of size
3. what if user gives the -ve index or out of bound entries while trying to access the elements
of the vector obj
*/

#include<iostream>
using namespace std;

class Vector{
public:
  //note that constrcutor doesn't have a return type
Vector(int s){
  if (s<0){
    throw length_error{"size"};
  }
    elem = new double[s];
    sz = s;

}
double & operator[](int i){
  if (i<0 || size()<=i) throw out_of_range{"operator[]"};
  return elem[i];
}
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
/*
Notice that inside main and anywhere outside class, you can't access private variable. so you ahve not
used elem  here but instead used [] operator to access the values
*/
int main(){
  int index = -1;

  try {
      Vector v1(-10);// create a vector object of 10 element
  }

 catch(length_error){
   cout<<"the size for the vector given is not correct--exiting the program....";
   return 0;

 }
catch(bad_alloc){
  cout<<"the allocation given is huge---exiting program....";
  return 0;
}

Vector v(20);
  try{
      v[index] = 50; // see its possible(due to operator-overloading)
  }

  catch (out_of_range){
    cout<<" the index given: " <<index<< " is out of range.. Exiting the program..";
    return 0;
  }
  int size=0;
  cout<<v.size()<<"\n";
  cout<<v[0]<<"\n";
 cout <<"-----------------------\n";
 cout<< "enter how many number you want to enter";
 cin>> size;
 cout <<"sum of the number entered is: "<<read_and_sum(size);

  return 0;
}
