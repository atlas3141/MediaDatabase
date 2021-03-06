//Josh Howell OCt 24th 2016
//A program for holding the information of a bunch of different kinds of media
# include <iostream>
# include <vector>
# include <cstring>
# include "genericType.h"
# include "movie.h"
# include "videoGame.h"
# include "music.h"

using namespace std;

void newItem(vector<genericType*>* list);
void searchItems(vector<genericType*>* list);
void deleteItem(vector<genericType*>* list);
int main(){
  vector<genericType*> list; //the storage vector
  char input[20];
  bool running = true;
  while (running == true){ //command line loop
    cin.get(input,20);
    cin.ignore();
    if (!strcmp(input,"SEARCH")){
      searchItems(& list);
    }
    else if (!strcmp(input, "ADD")){
      newItem(& list);
    }
    else if (!strcmp(input,"DELETE")){
      deleteItem(& list);
    }
    else if (!strcmp(input, "HELP")){
      cout << "Commands: \nSEARCH\nADD\nEXIT" << endl;
    }
    else if (!strcmp(input, "EXIT")){
      for(vector<genericType*>::iterator it = list.begin(); it != list.end(); it++){
	delete (*it);
      }
      running = false;

    }
    else{
      cout << "No such command: " <<  input << endl;
      cout << "Type HELP for a list of commands" << endl;
    }
  }
}
void searchItems(vector<genericType*>* list){ 
  bool found = false;//ask what to seach to for
  char searchQuery[80];
  cout << "Give Me a Year or a Title to look for" << endl;
  cin.get(searchQuery,80);
  cin.ignore();
  for(vector<genericType*>::iterator it = list->begin(); it != list-> end(); it++){ //look through the vector to find the item with that info
    if(!strcmp((*it)->getTitle(),searchQuery) || !strcmp((*it)->getYear(),searchQuery)){
      found = true;
      int type = (*it)->getType();
      if(type == 1){
	music* m = (music*) (*it);
	m->print();
      }
      if(type == 2){
        movie* m = (movie*) (*it);
        m->print();
      }
      if(type == 3){
        videoGame* m = (videoGame*) (*it);
        m->print();
      }
    }
  }
  if (!found){
      cout << "No Items found" << endl;
  }
} 
void deleteItem(vector<genericType*>* list){
  bool found = false;//ask what to delete
  char searchQuery[80];
  cout << "Give Me a Year or a Title to delete" << endl;
  cin.get(searchQuery,80);
  cin.ignore();
  for(vector<genericType*>::iterator it = list->begin(); it != list-> end(); it++){ //look through the vector to find the item with that info
    if(!strcmp((*it)->getTitle(),searchQuery) || !strcmp((*it)->getYear(),searchQuery)){
      found = true;
      delete (*it);
    }
  }
  if (!found){
    cout << "No Items found" << endl;
  }
}
void newItem(vector<genericType*>* list){ //ask what kind of item you need to add then create it 
  char input[10];
  cout << "Is it a Movie, Game or Music" << endl;
  cin.get(input,10);
  cin.ignore();
  if(!strcmp(input,"Music")){
    music* c = new music();
    list->push_back(c);
  }
  else if(!strcmp(input,"Movie")){
    movie* c = new movie();
    list->push_back(c);
  }
  else if(!strcmp(input,"Game")){
    videoGame* c = new videoGame();
    list->push_back(c);
  }
  else{
    cout << "Thats not the word Music, Movie or Game" << endl;
  }
}
