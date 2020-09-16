#include<iostream>
#include "Car.h"

int main()
{
 Car car1("california",2013,"Honda");
  //cout<<car1.getStyle()<<"\n";
//  cout<<car1.getDesc()<<"\n";
//  cout<<car1.getYear()<<"\n";



  Car c("ohio",2003,"civic");
  Vehicle *vptr = &c;
  cout<<"\n\n"<<vptr->getDesc();//which version of getDesc will be called here?


  Car *cptr = &c;
  cout<<"\n\n"<<cptr->getDesc();//which version of getDesc will be called here?

  return 0;
}
