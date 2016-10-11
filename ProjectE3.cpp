#include <iostream>

using namespace std;

int main() {
  long n = 600851475143;
  for (long i=2; i*i < n; i++) {
    while (n % i == 0) {
      if (n>i) n /= i;
    }
  }
  cout << "Largest prime factor: " << n << endl;
}
