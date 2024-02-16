#include <iostream>

using namespace std;

// Multiples of 3 and 5
int main() {
  int total = 0;
  for(int i = 0; i < 1000; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  cout << "Total: " << total << endl;
}
