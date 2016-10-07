#include <iostream>

using namespace std;

class genericType {
 public:
  genericType(int newType);
  char* getTitle();
  int getYear();
  int getType();
 protected:
  int type;
  int year;
  char title[100];
};
