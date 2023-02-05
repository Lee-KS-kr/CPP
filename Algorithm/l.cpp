#include <bits/stdc++.h>

using namespace std;

pair<int, int> intpair;
tuple<int, int, int> inttuple;
int a, b, c;

int main(){
	intpair = {1, 2};
	inttuple = make_tuple(1, 2, 3);
	
	// those are same
	a = intpair.first;
	b = intpair.second;
	cout << a << " : " << b  << "\n";
	a = 0; b = 0;
	tie(a, b) = intpair;
	cout << a << " : " << b  << "\n";
	
	// those are same
	a = get<0>(inttuple);
	b = get<1>(inttuple);
	c = get<2>(inttuple);
	cout << a << " : " << b << " : " << c << "\n";
	a = 0; b = 0; c = 0;
	tie(a, b, c) = inttuple;
	cout << a << " : " << b << " : " << c << "\n";
	
	return 0;
}
