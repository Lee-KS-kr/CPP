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
// string str�� ����� ������ c_str�Լ��� �ɾ �ٷ��ϴµ�, �̰��� printf �Լ��� ���ڿ��� ����� ���� �������̴�. 
// printf ���ڿ��� ����Ϸ���, string�� ���ڿ��� ���� ������ Ÿ������ �ٲ� �־�� �ϱ� �����̴�.
// �ٶ� ���� ���ڿ��� ����� ������ ������ cout�� ����ϴ� ���� ����. 
