#include "Car.h"

Car::Car(const string & mylicense,const int my_year, const string & mystyle):Vehicle(mylicense,my_year),style{mystyle}{}
const string & Car::getStyle() const{return style;}
const string Car::getDesc() const {return style+" "+ license+ " car version of the func call";} 
