#include <iostream>
using namespace std;

int main (){

	int pc = 1; //prime counter.  
	int num = 3; //
	int maxDivisor = num-1; 
	
	while ( pc  <=  10001) {

		int divisor  = 2;

		while ( divisor <= maxDivisor ){
		
			maxDivisor = num - 1;
				
			int remainder = num % divisor;
			
		
			if  ( remainder  == 0 ) {  
				// num is divisible by a num other than 1 and itself.
				divisor = 2;
				num +=2;
			} 
			else if ( divisor == maxDivisor){ 
				// prime number found. Increment prime counter.
				pc++;
				cout<< pc <<" "<< num <<" " << divisor <<" "<< maxDivisor <<  endl;
				num += 2;
				divisor  = 2;
				if  ( pc >= 10001) { maxDivisor = 0; }
			}
			else { divisor ++; }	

		}
		
	}
	return 0;
}
