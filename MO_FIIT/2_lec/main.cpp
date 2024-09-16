// Директива препроцессора
#include <iostream>
#include <math.h>

int main() 
{
	// Типы данных
	// 1. Целочисленные
	// - char, 1 байт, -128..127
	// - short, 2 байта, -32768..32767
	// - int, 4 байта, -2^31 .. 2^31-1
	// - long long, 8 байт, -2^63 .. 2^63-1
	// - unsigned int, 4 байт, 0 .. 2^32-1
	// 2. Символьные
	// - char, 1 байт, -128..127
	// 3. Вещественные типы
	// - float, 4 байта, 6-7 цифр
	// - double, 8 байтов, 15-16 цифр 
	// 4. Логический тип
	// - bool, 1 байт, true/false

	// Арифметические операции
	// +, -, *, /, %, +=, -=, ++, --
	// Встроенные функции
	// pow, sqrt, sin, cos, tan, atan
	// (int)c - приведение типа из char в int, c-style cast

	//const double pi = acos(-1);

	int sum = 0;
	sum += 10; // sum = sum + 10;
	std::cout << sum << std::endl;

	int a, b;

	int numsSum;  // lower camel case
	int NumSum; // upper camel case
	int Num_Sum; // snake case
	int sumOfDigits;

	// https://ru.wikipedia.org/wiki/%D0%9F%D0%B8_(%D1%87%D0%B8%D1%81%D0%BB%D0%BE)
	const double pi = acos(-1);

	std::cin >> a >> b;

	if(b != 0)
		std::cout << a/b << std::endl;	
	else
		std::cout << "Divide by zero " << __FILE__ << " " << __LINE__ << std::endl;	
	

	
	return 0;
}