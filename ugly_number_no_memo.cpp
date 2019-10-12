//Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.
//
//Given a number n, the task is to find n’th Ugly number.
//
//Examples:
//
//
//
//Input  : n = 7
//Output : 8
//
//Input  : n = 10
//Output : 12
//
//Input  : n = 15
//Output : 24
//
//Input  : n = 150
//Output : 5832

#include <iostream>

using namespace std;

int main(){
	
	int input;
	
	cin >> input;
	
	if(input == 1 || input == 2 || input == 3 || input == 4 || input == 5){
		cout << input;
		return 0;
	}
	
	int count = 5;
	
	int now = 6;
	
	for(int i=now;;i++){
		
		int tod = i;
		
		while(tod >= 2 && tod % 2 == 0){
			tod = tod / 2;
		}
		
		while(tod >= 3 && tod % 3 == 0){
			tod = tod / 3;
		}
		
		while(tod >= 5 && tod % 5 == 0){
			tod = tod / 5;
		}
		
		if(tod == 1){
			count++;
		}
		
		if(count == input){
			cout << i;
			return 0;
		}
		
	}
	
	return 0;
}
