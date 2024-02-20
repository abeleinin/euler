#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int n) {
  string val = to_string(n);

  int i = 0;
  int j = val.size() - 1;

  while (i <= j) {
    if (val.at(i) != val.at(j)) {
      return false;
    } 
    i++;
    j--;
  }
  return true;
}

// Largest Palindrome Product
int main() {
  int largest = 0;
  int num1, num2;
  int curr;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      curr = i * j;
      if (curr > largest && isPalindrome(curr)) {
        largest = curr;
        num1 = i;
        num2 = j;
      }
    }
  }
  cout << num1 << " x " << num2 << " = " << largest << endl;
}

