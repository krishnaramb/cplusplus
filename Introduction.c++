/*
From this example, we need to learn
1. how  and when to use auto variable
2. element by element copy
3. how to use range-for statement. Note the imporatance of auto here
4. how to use reference (&) which avoids the cost of copying
5. While working with pointer, we need to check if it is pointing to sth or not by checking agaisnt nullptr
5a. The string is terminated by 0
6. The first user defined type structure
7. The aim is not to keep any variable uninitialized. So we have used Vector_init() for the initialization
8. The use of new keyword for dynamic memory allocation (heap) . Read more about new
9. Motivation of class: initialization of the obj created (using constrcutor) and

*/




#include <iostream>

using namespace std;


struct Vector{
  int size;
  double *elem;
};


void Vector_init(Vector &v, int size){

  v.elem = new double[size];
  v.size = size;


}


void copy_func()
{
  int v1[5] = {1,3,3,4,5};
  int v2[5];
  for (auto i=0;i!=5;++i)
  {
    v2[i] = v1[i];
  }

}



void print()
{
  int v[] = {1,2,2,3,4};
  for(auto value:v){
    cout<<value<<"\n";
  }
}

void increment(){
  int v[] = {1,2,3,4,5,6};
  for(auto &value:v)
    ++value;
  for(auto toPrint:v)
    cout<<toPrint<<"\n";

  }

int count_x(char *p, char x){
  if (p == nullptr) return 0;
  int count =0;
  while(*p !=0){
    if (*p == x) count++;
    ++p;
  }
  return count;
}


double read_and_sum(int s){
  Vector v;
  Vector_init(v,s);
  cout << "give the input ";
  for (auto i=0;i!=s;++i){
    cin>>v.elem[i];
  }
  double sum =0;
  for (auto i =0;i!=v.size;++i){
      sum+=v.elem[i];
  }
  return sum;
}

int main()
{
  copy_func();

  print();
  increment();
  cout<<count_x("krisahna",'a');
  cout << read_and_sum(5);




}
