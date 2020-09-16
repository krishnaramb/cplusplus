
#include <string>
using namespace std;
class Vehicle{
protected:
  string license;
  int year;
public:
  Vehicle(const string & mylicense, const int myyear);
  const string getDesc();
  const string & getLicense();
  const int getYear();

};
