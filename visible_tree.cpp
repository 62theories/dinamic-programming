#include <cstdio>
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>

using namespace std;

int main(){
	int cases = 3;
	
	cin >> cases;
	
	int nub = 0;
	
	while(cases--){
		int am;
		cin >> am;
		int arr[am];
		for(int i=0;i<am;i++){
			cin >> arr[i];
		}
		int maxx = -1;
		int len = 0;
		for(int i=am-1;i>=0;i--){
			if(arr[i] > maxx){
				len++;
				maxx = arr[i];
			}
		}
		cout << "Case " << ++nub << ": " << len << endl;   	
	}
	
}


