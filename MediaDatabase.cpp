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

int main(){
  vector<genericType*> list;
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
    else if (!strcmp(input, "HELP")){
      cout << "Commands: \nSEARCH\nADD\nExit" << endl;
    }
    else if (!strcmp(input, "EXIT")){
      running = false;
    }
    else{
      cout << "No such command: " <<  input << endl;
      cout << "Type HELP for a list of commands" << endl;
    }
  }
}
void searchItems(vector<genericType*>* list){ 
  bool found = false;//ask witch student to delte
  char searchQuery[80];
  cout << "Give Me an ID or Title to look for" << endl;
  cin.get(searchQuery,80);
  cin.ignore();
  for(vector<genericType*>::iterator it = list->begin(); it != list-> end(); it++){ //look through the vector to find the item with that id
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
void newItem(vector<genericType*>* list){
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
