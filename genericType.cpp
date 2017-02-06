//generic media class
#include <iostream>
#include "genericType.h"

using namespace std;

genericType::genericType(){
  cout << "Title?" << endl;
  cin.get(title,100);
  cin.ignore();
  cout << "Year?" << endl;
  cin >> year;
  cin.ignore();
}
char* genericType::getTitle(){
  return title;
}
int genericType::getType(){
  return type;
}
char* genericType::getYear(){
  return year;
}
genericType::~genericType(){
  cout << "You deleted something" << endl;
}
