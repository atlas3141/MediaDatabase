#include <iostream>
#include "videoGame.h"

using namespace std;

videoGame::videoGame(){
  cout << "Publisher?" << endl;
  cin.get(publisher,60);
  cin.ignore();
  cout << "Rating?" << endl;
  cin.get(publisher,50);
  cin.ignore();
}
char* videoGame::getPublisher(){
  return publisher;
}
char* videoGame::getRating(){
  return rating;
}
