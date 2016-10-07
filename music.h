#include <iostream>
#include "genericType.h"
using namespace std;

class music : public genericType{
 public:
  music();
  char* getArtist();
  char* getPublisher();
  float getDuration();
 protected:
  char artist[60];
  char publisher[50];
  float duration;
};
