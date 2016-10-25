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
      cout << "Commands: \nPSearch\nADD\nExit" << endl;
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
}
void newItem(vector<genericType*>* list){
  
}
