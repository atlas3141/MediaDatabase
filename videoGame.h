//class to hold info about video games
#include <iostream>
#include "genericType.h"
using namespace std;

class videoGame : public genericType{
public:
  videoGame();
  void print();
  char* getPublisher();
  char* getRating();
 protected:
  char publisher[60];
  char rating[5];
};
