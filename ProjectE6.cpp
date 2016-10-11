#include <iostream>
using namespace std;

int main (){

	int sum = 0;
	int square = 0;
	int sqSum = 0;
	for ( int i = 1; i <= 100; i ++ ){
		sum = sum + i;
		square = i*i;
		sqSum = sqSum + square;
		cout<<"i = "<<i<<" sum = "<<sum<<" sq = "<<square<<" squre sum= "<<sqSum<< endl; 	
	} 
	int sumSq = sum * sum;
	cout << sumSq - sqSum << endl;

} 
