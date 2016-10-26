//class to hold info about videoGames
#include <iostream>
#include "videoGame.h"

using namespace std;

videoGame::videoGame(){
  type = 3;
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
void videoGame::print(){
  cout << title << " (" << year << ")" << endl;
  cout << "Published by " << publisher << endl;
  cout << "Rated " << rating << endl;
}
