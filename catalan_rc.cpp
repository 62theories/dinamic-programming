#include <iostream>

using namespace std;

int catalan(int n){
	if(n == 0){
		return 1;
	}
	int sum = 0;
	for(int i=0;i<=n-1;i++){
		sum+= catalan(i) * catalan(n - i - 1);
	}
	return sum;
}

int main(){
	int input;
	cin >> input;
	cout << catalan(input);
	return 0;
}
