#include <iostream>
#include <unordered_map>

using namespace std;

bool isEven(int n) {
  if ((n % 2) == 0) {
    return true;
  }
  return false;
}

unordered_map<int, int> fibMap{{1, 1}, {2, 2}};

int fib(int n) {
  if (fibMap.find(n) != fibMap.end()) {
    return fibMap[n];
  }
  if (n <= 0) {
    return 0;
  }
  fibMap[n] = fib(n - 1) + fib(n - 2);
  return fibMap[n];
}

// Even Fibonacci Numbers
int main() {
  int total = 0;
  int fibIx = 1;
  int currFib = 0;
  while (currFib < 4000000) {
    currFib = fib(fibIx);
    total += isEven(currFib) ? currFib : 0;
    fibIx += 1;
  }
  cout << total << endl;
}

