#include <bits/stdc++.h>

using namespace std;

int ret = 1;
char c();

// void : type that return nothing
void v(){
	ret = 2;
	cout << ret << "\n";
	return;
}

double d(){
	return 1.245;
}

void forLoop(){
	string s[2] = {"out of time", "I love you"};
	for(string b : s) cout << b << "\n"; // these two are same
	for(int i = 0; i < 2; i++) cout << s[i] << "\n";
} 

bool trueOrFalse(){
	// 0 is false, else is true
	int a = -1;
	cout << bool(a) << "\n";
	a = 0;
	cout << bool(a) << "\n";
	a = 3;
	cout << bool(a) << "\n";
	
	return a;
}

int main(){
	v();
	double answer = d();
	cout << answer << "\n";
	cout << c() << "\n";
	forLoop();
	trueOrFalse();
	
	return 0;
}

char c(){
	char ch = 'a';
	return ch;
}
