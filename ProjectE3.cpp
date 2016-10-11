//What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;

int main() {
  long n = 600851475143;
  for (long i=2; i*i < n; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }
  cout << "Largest prime factor: " << n << endl;
}


/*If any given number is divided by the smallest possible factor, it leaves behind the largest possible factor.
  example: 100/ 2 = 50; 50 is the largest possible factor and 2 is the smallest. 
  Continuously dividing the largest remaining factor, will eventually lead you to the largest prime factor. 

 
