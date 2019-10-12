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

int min(int a,int b){
	if( a < b){
		return a;
	}
	return b;
}

int min3(int a,int b,int c){
	return min(min(a,b),c); 	 
}

int main(){
	
	int ans[1000] = {};
	
	int count = 1;
	
	ans[1] = 1;
	
	int indexmul2 = 1,indexmul3 = 1,indexmul5 = 1;
	
	int input;
	
	cin >> input;
	
	while(1){
		if(count == input){
			cout << ans[count];	
			return 0;
		}
		
		int thatmin = min3(ans[indexmul2]*2,ans[indexmul3]*3,ans[indexmul5]*5);
		
		ans[count+1] = thatmin;
		count++;
		
		if(thatmin == ans[indexmul2]*2){
			indexmul2+=1;	
		}
		if(thatmin == ans[indexmul3]*3){
			indexmul3+=1;
		}
		if(thatmin == ans[indexmul5]*5){
			indexmul5+=1;
		}		
	}
	
	
	return 0;
}
