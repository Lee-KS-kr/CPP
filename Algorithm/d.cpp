#include <bits/stdc++.h>
#define PI 3.141592
#define FORLOOP(x, n) for(int x = 0; x < n; x++)

using namespace std;

int main(){
	cout << PI << "\n";
	
	int input;
	int sum = 0;
	cin >> input;
	
	FORLOOP(i, input){
		sum += i;
	}
	
	cout << sum << "\n";
	return 0;
}
