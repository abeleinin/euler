#include <iostream>

using namespace std;

// Smallest Multiple
int main() {
  int res;
  int val = 2520;
  bool found = false;
  while (!found) {
    val += 2520;
    for (int i = 11; i < 21; i++) {
      if (val % i != 0) {
        break;
      } else if (i == 20 && val % 20 == 0) {
        found = true;
        res = val; 
      }
    }
  }

  cout << "Smallest Multiple of 1-20: " << res << endl;
}

