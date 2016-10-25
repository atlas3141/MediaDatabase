#include <iostream>
#include "genericType.h"
using namespace std;

class videoGame : public genericType{
public:
  videoGame();
  char* getPublisher();
  char* getRating();
 protected:
  char publisher[60];
  char rating[5];
};
