#include <bits/stdc++.h>

using namespace std;

void autoType(){
	vector<pair<int, int>> v;
	for(int i = 1; i <= 5; i++){
		v.push_back({i, i});
	}
	
	// these are same
	for(auto it : v){
		cout << it.first << " : " << it.second << "\n";
	}
	for(pair<int, int> it : v){
		cout << it.first << " : " << it.second << "\n";
	}
}

void typeCasting(){
	double ret = 2.12345;
	int n = 2;
	int a = (int) round(ret / double(n));
	cout << a << "\n";
}

void upAndLow(){
	char a = 'a';
	cout << "a is : " << (int)a << "\n";
	
	char A = 'A';
	cout << "A is : " << (int)A << "\n";
	
	A++;
	a++;
	cout << "a is : " << a << " A is : " << A << "\n";
	
	A += 10;
	a += 10;
	cout << "a is : " << a << " A is : " << A << "\n";
	
	A -= 10;
	a -= 10;
	cout << "a is : " << a << " A is : " << A << "\n";
	
	int i = 32;
	a = (char)97;
	cout << a << "\n";
	a -= i;
	cout << a << "\n";
}

int main(){
	//autoType();
	//typeCasting();
	upAndLow();
	
	return 0;
}
