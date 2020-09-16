
#include <iostream>
#include <string.h>
using namespace std;

class Vehicle{
protected:
  string license;
  int year;
  int * count;

public:
  Vehicle(){cout<<"vehicle default constructor called\n";}
  Vehicle(const string & mylicense, const int myyear):license(mylicense),year(myyear){
    cout<<"base class constructor called\n";
    count = new int;

  }
  const int getyear()const {return year;}
  const string & getLicense() const {return license;}
  virtual const string getDesc() {return license + " vehicle version of the function called ";}
  ~Vehicle(){
        cout<<"vehicle version of the destructor called\n";
        delete[] count;
        cout<<"count variable is deallocated\n";
      }
};


class Car:public Vehicle{
  string style;

public:
    Car(){cout<<"Car default constructor called \n";}
    Car(const string & mylicense, const int myyear, const string mystyle):Vehicle(mylicense, myyear),style(mystyle){cout<<"Car constructor called\n";}
    const string & getStyle() const {return style;}
    const string getDesc(){return style;}
    ~Car(){cout<<"Car version of the destructor called\n";}
};


int main()
{
  Vehicle *vehicle = new Car();
  Car *myvehile = new Car("california", 2013, "accord");
  cout<<myvehile->getyear()<<"\n";
  cout<<myvehile->getLicense()<<"\n";
  cout<<myvehile->getDesc()<<"\n";
  delete myvehile;
  cout <<"end of main function\n";
  return 0;
}
