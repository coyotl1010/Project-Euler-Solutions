#include <iostream>
using namespace std;
int main (){
	
	int sm = 20; // the smallest multiple
// the following loop end only when the "moding" value reaches twenty. Meaning that the smallest multiple has been found
	for ( int mod = 2; mod <= 20; mod++){
		int modResult = sm % mod;
	

		if ( modResult != 0){
		mod = 2; // mod is reset until the smallest multiple is found
		sm += 20; // increment by twnty bc only multiple of 20 are ev-				enly divisible by 20
		}
	
	}
	cout << sm <<endl;
}
