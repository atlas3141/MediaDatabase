#include <iostream>
#include "genericType.h"
using namespace std;

class movie : public genericType{
public:
  movie();
  char* getPublisher();
  char* getRating();
 protected:
  char publisher[60];
  char rating[5];
};
