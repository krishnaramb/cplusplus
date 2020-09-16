
#include<iostream>

using namespace std;

class Vector{
  int sz;
  double *elem;

public:
  Vector():sz(0),elem(nullptr){cout<<"default const called\n";}
  Vector(int size):sz(size){
    cout<<"normal constructor called\n";
    elem = new double[size];
    for(auto i = 0; i != size; ++i)
      elem[i] = 0;
  }
  Vector(const Vector & v) { //copy constructor called Vector v1(v2);
    cout<<"copy-constructor called \n";
    sz = v.sz;
    elem = new double[sz];
    for (auto i =0; i!= sz; ++i)
      elem[i] = v.elem[i];

  }
  Vector & operator=(const Vector & v){ //copy assignemnt called:
    cout<<"copy-assignemnt called\n";
    sz = v.sz;
    delete[] elem;
    elem = new double[sz];
    for (auto i=0; i!=sz; ++i)
      elem[i] = v.elem[i];
    return *this;
  }

//  Vector(std::initializer_list<double> lst):elem{new double[lst.size()], sz{(static_cast<int>)lst.size()}{}

  double& operator[](int index){
    cout<<"index operator called \n";
    if (index > sz-1)
      {
        cout<<"index out of range\n";
      }
    return elem[index];
  }

  int size(){
    return sz;
  }

  ~Vector(){
    cout<<"destructor called\n";
    delete[] elem;
  }

};
void printvalues(Vector v1);

int main()
{
  Vector v1, v2(2);
  v1 = v2;
  //Vector v3 = {1.2, 1.0, 2, 3};

  printvalues(v1);
  //v1[10] = 100;

  cout << "end of main\n";
 return 0;
}

void printvalues(Vector v1)
{
  cout<<"size:"<<v1.size()<<"\n";
  for (auto i =0; i != v1.size(); ++i)
  {
    cout<<"\t"<<v1[i]<<"\n";
  }
  cout <<"\n";
}
