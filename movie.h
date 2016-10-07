#include <iostream>
#include "genericType.h"
using namespace std;

class movie : public genericType{
 public: 
  movie();
  char* getDirector();
  char* getRating();
  float getDuration();
 protected:
  char director[60];
  char rating[5];
  float duration;
};
