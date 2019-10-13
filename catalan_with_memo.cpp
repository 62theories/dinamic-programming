//The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

#include <iostream>

using namespace std;

int memo[1000] = {};

int catalan(int n){
	if(memo[n] == 0){
		if(n == 0){
			memo[n] = 1;
			return 1;
		}
		int sum = 0;
		for(int i=0;i<=n-1;i++){
			sum+= catalan(i) * catalan(n - i - 1);
		}
		memo[n] = sum;
		return sum;	
	}else{
		return memo[n];	
	}
}

int main(){
	int input;
	cin >> input;
	cout << catalan(input);
	return 0;
}
