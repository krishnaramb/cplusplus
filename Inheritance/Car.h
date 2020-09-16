#include "Vehicle.h"
#include<string.h>
class Car:public Vehicle{
  string style;

public:
  Car(const string & mylicense,const int my_year, const string & mystyle);
  const string & getStyle() const;
  const string getDesc() const;//override the superclass function

};
