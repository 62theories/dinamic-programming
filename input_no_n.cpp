#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <string> 
#include <sstream> 
#include <vector>
using namespace std;
int main(){
	int cases = 3;
	cin >> cases;
	cin >> ws;
	int nub = 0;	
	while(cases--){
		vector<int> arr;
		stringstream ss; 
		string line, obj;
		getline(cin, line); 
		ss << line;
		while(ss >> obj) 
		{
	 		stringstream temp(obj); 
			int x = 0; 
	    	temp >> x;
			arr.push_back(x);  
		}
		vector<int>::reverse_iterator ptr;
		int len = 0;
		int maxxx = -1;
		for (ptr = arr.rbegin(); ptr != arr.rend(); ptr++){
			if(*ptr > maxxx){
        		maxxx = *ptr;
				len++; 
			}
		} 
		cout << "Case " << ++nub << ": " << len << endl;   		
	}
}


