//
//Input:  n = 2
//Output: Number of ways = 2
//Explanation: Let the set be {1, 2}
//            { {1}, {2} } 
//            { {1, 2} }
//
//Input:  n = 3
//Output: Number of ways = 5
//Explanation: Let the set be {1, 2, 3}
//             { {1}, {2}, {3} }
//             { {1}, {2, 3} }
//             { {2}, {1, 3} }
//             { {3}, {1, 2} }
//             { {1, 2, 3} }. 
//S(n, k) is called Stirling numbers of the second kind
//
//First few Bell numbers are 1, 1, 2, 5, 15, 52, 203, ….

int ans[100][100] = {};

#include <iostream>

using namespace std;

int bell(int n){
	int sum = 0;

	for(int i=1;i<=n;i++){
		sum+=ans[n][i];		
	}
	return sum;
}

int main(){
	
	int input1,input2;
	
	for(int i = 0;i < 100;i++){
		for(int j = 0;j < 100;j++){
				ans[i][j] = -1;
		}
	}
	
	for(int i = 0;i < 100;i++){
		for(int j = 0;j < 100;j++){
			if(i == j){
				ans[i][j] = 1;
			}else if(j == 0){
				ans[i][j] = 0;
			}else if(j > i){
				ans[i][j] = 0;
			}
		}
	}
	
	for(int i = 1;i < 100;i++){
		for(int j = 1;j < 100;j++){
			if(ans[i][j] == -1)
				ans[i][j] = j*ans[i-1][j] + ans[i-1][j-1];
		}
	}
	
	cin >> input1;
	
	cout << bell(input1);
	
	return 0;
}
