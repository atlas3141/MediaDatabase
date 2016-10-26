//Class to hold data about Movies
#include <iostream>
#include "genericType.h"
using namespace std;

class movie : public genericType{
 public: 
  movie();
  void print();
  char* getDirector();
  char* getRating();
  float getDuration();
 protected:
  char director[60];
  char rating[5];
  float duration;
};
