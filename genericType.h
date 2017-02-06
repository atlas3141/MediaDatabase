//generic mediatype class
#ifndef GENERICTYPE_H_INCLUDED
#define GENERICTYPE_H_INCLUDED
#include <iostream>

using namespace std;

class genericType {
 public:
  genericType();
  ~genericType();
  char* getTitle();
  char* getYear();
  int getType();
 protected:
  int type;
  char year[7];
  char title[100];
};
#endif
