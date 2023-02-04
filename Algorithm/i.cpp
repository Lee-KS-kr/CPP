#include <bits/stdc++.h>

using namespace std;

int a = 1, b = 2;
double c = 1.23456789;
char s = 'a';
string str = "marvel";

int main(){
	printf("Me %d : You %d\n", a, b);
	printf("%.6lf\n", c);
	printf("%03d\n", a);
	
	printf("I am a spiderman : %d\n", a);
	printf("I am a spiderman : %c\n", s);
	printf("I am a spiderman : %s\n", str.c_str()); // *1
	printf("I am a spiderman : %lf\n", c);
	
	return 0;
}

// *1
// string str을 출력할 때에는 c_str함수를 걸어서 줄력하는데, 이것이 printf 함수로 문자열을 출력할 때의 주의점이다. 
// printf 문자열을 출력하려면, string을 문자열에 대한 포인터 타입으로 바꿔 주어야 하기 때문이다.
// 다라서 보통 문자열을 출력할 때에는 간단히 cout을 사용하는 것이 좋다. 
