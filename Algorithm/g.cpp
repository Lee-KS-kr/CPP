#include <bits/stdc++.h>

using namespace std;

//string s;
//
//int main(){
//	getline(cin, s);
//	cout << s << "\n";
//	return 0;
//}

int T;
string s;

int main(){
	cin >> T;
	string bufferFlush;
	getline(cin, bufferFlush);
	for(int i = 0; i < T; i++){
		getline(cin, s);
		cout << s << "\n";
	}
	
	return 0;
}
