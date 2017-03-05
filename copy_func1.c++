#include <iostream>

using namespace std;

void copy_func()
{
  int v1[5] = {1,3,3,4,5};
  int v2[5];
  for (auto i=0;i!=5;++i)
  {
    v2[i] = v1[i];
  }

}

int main()
{
  copy_func();
}
