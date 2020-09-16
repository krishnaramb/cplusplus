/*Behaviour of function overriding without the virual keyword */

#include<iostream>
#include<string.h>
using namespace std;

class Vehicle{
protected:
  string license;
  int year;
public:
  Vehicle(const string & mylicense, const int myyear):license{mylicense},year{myyear}{cout<<"supperclass constrcutor called";}
  //virtual const string getDesc() {return license + " Vehicle version of the func call ";}
  virtual const string getDesc()=0;
  const string & getLicense() const{return license;}
  const int getYear() const{return year;}

};

class Car:public Vehicle{
  string style;

public:
  Car(const string & mylicense,const int my_year, const string & mystyle):Vehicle(mylicense,my_year),style{mystyle}{}
  const string & getStyle() const{return style;}
 const string getDesc() const {return style+" "+ license+ " car version of the func call";} //override the superclass function

};
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

  void printtype()
