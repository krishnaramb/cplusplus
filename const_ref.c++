#include <iostream>
using namespace std;

void printarray( const int & array,int size){
  for (int i=0;i<size;++i){
  //  cout<<array[i];
    cout<<"hey";

  }
cout<<"Krishna";
}

int  main(){
int myarray[]{1,2,3,4,4};
printarray(&myarray,(int)sizeof(myarray)/sizeof(int));
return 0;


}
