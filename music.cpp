#include <iostream>
#include "music.h"

using namespace std;

music::music(){
  cout << "Artist?" << endl;
  cin.get(artist,60);
  cin.ignore();
  cout << "Publisher?" << endl;
  cin.get(publisher,50);
  cin.ignore();
  cout << "Duration?" << endl;
  cin >> duration;
  cin.ignore();
}
char* music::getArtist(){
  return artist;
}
char* music::getPublisher(){
  return publisher;
}
float music::getDuration(){
  return duration;
}
