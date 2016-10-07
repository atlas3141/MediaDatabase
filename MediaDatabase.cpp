# include <iostream>
//# include "genericType.h"
# include "movie.h"
using namespace std;

int main(){
  movie* c = new movie();
  cout << c->getTitle() << endl;
}
