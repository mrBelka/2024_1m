// Директива препроцессора
#include <iostream>
#include <math.h>
#include <iomanip>

//#define N 100

//const int N = 10;

int main() 
{
	

	//std::cout << N << std::endl;

	// 1. Переполнение типа (overflow)
	long long a = 10000; // 32767 -> -32768, -32767, -32766
	long long b = 10000;
	long long c = 10000;
	long long d = a*b*c;
	std::cout << d << std::endl;

	// С точностью до 10^-8 вывести площадь круга
	// 
	const float pi = acos(-1); // 3.1415926535
	float r = 1.23456789;

	//
	int a1 = 3;
	int a2 = 4;
	int a3 = 6;
	int p = (int)((a1+a2+a3)/2.0f);	// (int) - c-style cast

	char c1 = 'a';
	std::cout << static_cast<int>(c1) << std::endl;

	// reinterpret_cast
	// dynamic_cast
	// const_cast



	
	return 0;
}