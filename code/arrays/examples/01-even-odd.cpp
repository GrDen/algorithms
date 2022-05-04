#include <iostream>
using namespace std;

void reset(int *t) {
  cout << "*t=" << *t << endl;
  *t = 0;
  cout << "*t=" << *t << endl;
  t = 0;
}

int main() {
  int a = 124;
  cout << "a=" << a << endl;
  reset(&a);
  cout << "a=" << a << endl;
}
