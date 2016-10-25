#ifndef GENERICTYPE_H_INCLUDED
#define GENERICTYPE_H_INCLUDED
#include <iostream>

using namespace std;

class genericType {
 public:
  genericType();
  char* getTitle();
  int getYear();
  int getType();
 protected:
  int type;
  int year;
  char title[100];
};
#endif
