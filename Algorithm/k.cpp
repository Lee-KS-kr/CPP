#include <bits/stdc++.h>

using namespace std;

void getString(){
	string a = "love is";
	a += " pain!";
	a.pop_back();
	
	cout << a << " : " << a.size() << "\n";
	cout << char(* a.begin()) << "\n";
	cout << char(* (a.end() - 1)) << "\n";
	
	// string& insert size(size_t pos, const string& str);
	a.insert(0, "test ");
	cout << a << " : " << a.size() << "\n";
	
	// string& erase (size_t pos = 0, size_t Len = npos);
	a.erase(0, 5);
	cout << a << " : " << a.size() << "\n";
	
	// size_t find (const string& str, size_t pos = 0);
	auto it = a.find("love");
	if(it != string::npos){
		cout << "include" << "\n";
	}
	cout << it << "\n";
	cout << string::npos << "\n";
	
	//string substr (size_t pos = 0, size_t Len = npos) const;
	cout << a.substr(5, 2) << "\n";
	return;
}

void askii(){
	string s = "123\n";
	s[0]++;
	printf("%s", s.c_str());
	
	char a = 'a';
	cout << (int)a << "\n";
	a++;
	cout << a << "\n";
	
	return;
}

void getReverse(){
	string a = "It's hard to have a sore leg";
	reverse(a.begin(), a.end());
	cout << a << "\n";
	reverse(a.begin(), a.end());
	cout << a << "\n";
	reverse(a.begin() + 3, a.end() - 3);
	cout << a << "\n";
}

vector<string> split(string input, string delimiter){
	vector<string> ret;
	long long pos = 0;
	string token =  "";
	
	while((pos = input.find(delimiter)) != string::npos){
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	
	return ret;
}

void tryParse(){
	string s1 = "amumu101"; // if the string is string, return 0;
	string s2 = "10"; // else return the number
	cout << atoi(s1.c_str()) << "\n";
	cout << atoi(s2.c_str()) << "\n";
}

int main(){
	//getString();
	//askii();
	//getReverse();
	//string s = "hello my name is mizu and i love game", d = " ";
	//vector<string> a = split(s, d);
	//for(string b : a) cout << b << "\n";
	tryParse();
	
	return 0;
}
