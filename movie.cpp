//Clas to hold Data about music

#include <iostream>
#include "movie.h"

using namespace std;

movie::movie(){
  type = 2;
  cout << "Director?" << endl;
  cin.get(director,50);
  cin.ignore();
  cout << "Rating?" << endl;
  cin.get(rating,5);
  cin.ignore();
  cout << "Duration?" << endl;
  cin >> duration;
  cin.ignore();
}
char* movie::getDirector(){
  return director;
}
char* movie::getRating(){
  return rating;
}
float movie::getDuration(){
  return duration;
}
void movie::print(){
  cout << title << " (" << year << ")" << endl;
  cout << "Directed By " << director << endl;
  cout << "(" << rating << ")" << duration << " Minutes" << endl;
}
