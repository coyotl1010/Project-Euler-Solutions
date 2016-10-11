/*By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/
#include<iostream>
using namespace std;


int main(){

	int sum = 2; // sum is given intial even value of the fibonacci seqence. 
	int nxt = 0;
	int previous = 1;
	int current = 2;

	while( current < 4000000 ){
		

		nxt = current + previous;	// next value in seq is produced
		previous = current;	// current value will become previous value in the sequence 	
		current = nxt;		// the latest value in seq produced is given "current status"

		if (current % 2 == 0){
				sum = current + sum;
				cout << sum << endl;
				
		}



	}


}

