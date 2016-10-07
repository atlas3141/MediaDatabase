#include <iostrem>

using namespace std;

class genericType {
 public:
  genericType();
  char* getTitle();
  int getYear();
  int getType;
 protected:
  int type;
  int year;
  char title[100];
}
