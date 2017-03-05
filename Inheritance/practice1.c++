#include<iostream>
#include<string.h>
using namespace std;

class Vehicle{
protected:
  string license;
  int year;
public:
  Vehicle(const string & mylicense, const int myyear):license{mylicense},year{myyear}{cout<<"supperclass const called";}
  const string getDesc() {return license + "from";}
  const string & getLicense() const{return license;}
  const int getYear() const{return year;}

};

class Car:Vehicle{
  string style;

public:
  Car(const string & mylicense,const int my_year, const string & mystyle):Vehicle(mylicense,my_year),style{mystyle}{}
  const string & getStyle() const{return style;}

};
  int main()
  {
    Car car1("california",2013,"Honda");
    cout<<car1.getStyle();
    cout<<car1.getDesc();
    cout<<car1.getYear();
    return 0;
  }
