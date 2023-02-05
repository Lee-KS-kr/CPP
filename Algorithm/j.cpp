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

int main(){
	v();
	double answer = d();
	cout << answer << "\n";
	cout << c() << "\n";
	
	return 0;
}

char c(){
	char ch = 'a';
	return ch;
}
