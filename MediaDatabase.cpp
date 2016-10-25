# include <iostream>
//# include "genericType.h"
# include "movie.h"
# include "videoGame.h"
# include "music.h"
using namespace std;

int main(){
  movie* c = new movie();
  cout << c->getTitle() << endl;
}
