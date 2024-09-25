// Директива препроцессора
#include <iostream>
#include <math.h>
#define N 10
#define DEBUG

int main() 
{
	#ifdef DEBUG
		int y = 10; // 0b1010
		int i = 2;
	#endif


	setlocale(LC_ALL, "Rus");
	std::cout << "Привет, мир!" << std::endl;


	// 1. Арифметические
	// +, -, *, /, ++, --, +=, *=, /=, -=, %
	int a = 11;
	int b = 3;
	float c = a * 1.0f / b;

	int d = a + b;
	a = a + 10;
	a += 10;
	//std::cout << c << std::endl;
	//std::cout << 11%7 << std::endl;
	//std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;

	// 2. Логические
	// ||, &&, !, <, <=, >, >=, !=, ==
	/*bool f1 = true;
	bool f2 = false;
	int a1 = -1;
	// [0; 10]
	int d = a1++;
	std::cout << ((0 <= a1) && (d)) << std::endl;
	a1 = 1;
	std::cout << a1 << std::endl;*/

	// 3. Битовые операторы
	// 
	int x1 = 10;
	 // 0b0101
	int x4 = 0b0011;
	int x3 = 0x0A;



	// ~
	// Установить i-ый бит числа в 1
	int x2 = 0b1010;
	int i = 2;
	std::cout << (x2 | (1 << i)) << std::endl;
	std::cout << (x2 & ~(1 << i)) << std::endl;
	return 0;
}