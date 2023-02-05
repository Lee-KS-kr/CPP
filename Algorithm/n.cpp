#include<bits/stdc++.h>

using namespace std;

int i;
string s = "mizue lee";

int main(){
	i = 0;
	int *a = &i;
	cout << a << "\n";
	string *b = &s;
	cout << b << "\n";
	
	string c = "abcde";
	string *d = &c;
	cout << d << "\n";
	cout << *d << "\n";
	
	int e[3] = {1,2,3};
	int *f = &e[0];
	int *g = e;
	int *h = (e + 1);
	cout << f << "\n";
	cout << g << "\n";
	cout << h << "\n";
	cout << &e[1] << "\n";
	
	return 0;
}
