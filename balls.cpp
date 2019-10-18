#include <bits/stdc++.h>

using namespace std;

//4
//1 2 3 4
//4 3 2 1
//= 10
//
//3
//0 5 0
//2 0 3
//= 5

int main(){
	
	int count = 0;
	int sizes;
	
	cin >> sizes;
	
	int arr[sizes];
	int arr2[sizes]; 
	
	for(int i=0;i<sizes;i++){
		cin >> arr[i];
	}
	
	for(int i=0;i<sizes;i++){
		cin >> arr2[i];
	}
	
	for(int i=0;i<sizes-1;i++){
		if(arr[i] != arr2[i]){
			if(arr[i] < arr2[i]){
				count+=	arr2[i] - arr[i];
				arr[i+1] -= arr2[i] - arr[i]; 	
			}else{
				count+=	arr[i] - arr2[i];
				arr[i+1] += arr[i] - arr2[i];
			}
		}
	}
	
	cout << count;
	
	return 0;
}
