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

int s(int n,int k){
	
	if(ans[n][k] == -1){
		if(n == k){
			ans[n][k] = 1;
			return 1;
		}else if(k == 0){
			ans[n][k] = 0;
			return 0;
		}else if(k > n){
			ans[n][k] = 0;
			return 0;
		}
		int temp = k*s(n-1,k) + s(n-1,k-1);
		ans[n][k] = temp;
		return temp;	
	}else{
		return ans[n][k];
	}
	
}

int bell(int n){
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum+=s(n,i);
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
	
	cin >> input1;
	
	cout << bell(input1);
	
	return 0;
}
