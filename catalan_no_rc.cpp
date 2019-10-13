//The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

#include <iostream>

using namespace std;

int memo[1000] = {};

int main(){
	int input;
	cin >> input;
	memo[0] = 1;
	memo[1] = 1;
	if(input == 0 || input == 1){
		cout << input;
		return 0;
	}
	for(int j=2;j<=input;j++){
		int sum = 0;
		for(int i=0;i<=j-1;i++){
			sum+= memo[i] * memo[j - i - 1];
		}
		memo[j] = sum;
	}
	cout << memo[input];
	return 0;
}
