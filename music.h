//class to hold data about music
#include <iostream>
#include "genericType.h"
using namespace std;

class music : public genericType{
 public:
  music();
  void print();
  char* getArtist();
  char* getPublisher();
  float getDuration();
 protected:
  char artist[60];
  char publisher[50];
  float duration;
};
