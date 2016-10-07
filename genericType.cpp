#include <iostream>
#include "genericType.h"

using namespace std;

genericType::genericType(int newType){
  type = newType;
  cout << "Title?" << endl;
  cin.get(title,30);
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
int genericType::getYear(){
  return year;
}
