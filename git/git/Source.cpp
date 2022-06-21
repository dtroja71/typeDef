#include <iostream>
#include <string>

using namespace std;
using si_t = short int;
typedef unsigned long long l_t;
unsigned long long num1 = 10l;
l_t num2 = 100l;

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

l_t sum(l_t a, l_t b) {
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	system("pause");
	return 0;
}