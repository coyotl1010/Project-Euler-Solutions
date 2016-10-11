#include <iostream>
#include <string> 
using namespace std;

int main(){

	string num;
	string lp; //larget palindrome
	
	for (int i  = 100; i <= 999; i++){
		for (int j = i; j <= 999; j++) {
			int n = i * j;
			int sum;
			num = to_string(n);
			if ( num  == string (num.rbegin(), num.rend())  && ( sum < (i+j) )){ // checks if num is a palindrome also makes sure that the palindromes appear in sequential order.
				lp = num;
				sum = i+j; // sum of i+j must be greater than previous all i and j. This ensure the largest palindrome
				cout << i << " x " << j << " = " << lp <<endl;
			
			}
		}
	}
}
