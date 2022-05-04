#include <iostream>
using namespace std;
  
void swap(int *p1, int* p2) {
  int t = *p1;
  *p1 = *p2;
  *p2 = t;
}


int main() {
  
  int p1 = 10;
  int p2 = 20;
  
  cout << p1 << " " << p2 << endl;

  swap(&p1, &p2);

  cout << p1 << " " << p2 << endl;

  return 0;
}
