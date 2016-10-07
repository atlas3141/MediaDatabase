#include <iostream>
#include "movie.h"

using namespace std;

movie::movie(){
  cout << "Director?" << endl;
  cin.get(director,50);
  cin.ignore();
  cout << "Rating?" << endl;
  cin.get(rating,5);
  cin.ignore();
  cout << "Durration?" << endl;
  cin >> durration;
  cin.ignore();
}
char* movie::getDirector(){
  return director;
}
char* movie::getRating(){
  return rating;
}
float movie::getDuration(){
  return durration;
}
