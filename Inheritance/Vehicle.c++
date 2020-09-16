#include "Vehicle.h"


  Vehicle::Vehicle(const string & mylicense, const int myyear)
    :license{mylicense},year{myyear}
  {

  }
  const string Vehicle::getDesc()
  {
    return license + " Vehicle version of the func call ";
  }
  const string & Vehicle::getLicense()
  {
    return license;
  }
 const int Vehicle::getYear()
    {
      return year;
    }
