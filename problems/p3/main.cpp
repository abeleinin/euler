#include <iostream>
#include <cmath>

using namespace std;

long long largestPrimeFactor(long long n) {
  while (n % 2 == 0) {
    n = n / 2;
  }

  if (n == 1) return 2;

  long long largestPrime = 1;
  for (long long i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      largestPrime = i;
      n = n / i;
    }
  }

  if (n > 2) largestPrime = n;

  return largestPrime;
}

// Largest Prime Factor
int main() {
  long long n = 600851475143;
  cout << "The largest prime is: " << largestPrimeFactor(n) << endl;
}
