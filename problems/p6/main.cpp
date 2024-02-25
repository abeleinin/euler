#include <iostream>

using namespace std;

// Sum Square Difference
int main() {
  int sum_sqr = 0;
  int tot = 0;
  for (int i = 1; i < 101; i++) {
    sum_sqr += i * i;
    tot += i;
  }
  int sqr_sum = tot * tot;
  int diff = sqr_sum - sum_sqr;
  cout << "Sum Square difference: " << diff << endl;
}

