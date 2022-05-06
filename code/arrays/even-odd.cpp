#include <iostream>
#include <vector>
using namespace std;

/*
 * Reaorder the entries in array so that even appear first
 */

vector<int> evenOddExtraSpace(vector<int>* v) {
  vector<int>& vr = *v;
  vector<int> even, odd, result;

  for(int i=0; i < vr.size(); i++) {
    if(vr[i] % 2 == 0) {
      even.push_back(vr[i]);
    } else {
      odd.push_back(vr[i]);
    }
  }
 
  for(int i=0; i < even.size(); i++) {
    result.push_back(even[i]);
  }

  for(int i=0; i < odd.size(); i++) {
    result.push_back(even[even.size() + i]);
  }

  return result;
}


void evenOddInPlace(vector<int>* v) {
  vector<int>& vr = *v;
  int evenNext = 0;
  int oddNext = vr.size() - 1;

  while(evenNext < oddNext) {
    if(vr[evenNext] % 2 == 0) {
      evenNext++;
    } else {
      int t = vr[evenNext];
      vr[evenNext] = vr[oddNext];
      vr[oddNext] = t;
      oddNext--;
    }
  }
}

int main() {
  vector<int> v = {1,2,3,4,5,6,7,8,9,11,12,16,21};

  evenOddInPlace(&v);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}

