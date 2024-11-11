#include <func.hpp>
#include <iostream>

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	return;
}

bool isPrime(int x)
{
	if(x < 2)
		return false;
	for(int d = 2; d <= sqrt(x); d++)
		if(x % d == 0)
			return false;
	return true;
}

// Сумма цифр числа
int sumOfDigits(int x)
{
	int sum = 0;
	while(x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

void Read(int mas[N_Max], int& n)
{
	std::cin >> n;
	for(int i=0;i<n;i++)
		std::cin >> mas[i];
}

void Write(int mas[N_Max], int n)
{
	for(int i=0;i<n;i++)
		std::cout << mas[i] << " " << std::endl;
}

bool isFirstDigitOne(int mas[N_Max], int n)
{
	for(int i=0;i<n;i++)
	{
		int tmp = mas[i];
		while(tmp > 9)
			tmp /= 10;
		if(tmp == 1)
			return true;
	}
	return false;
}

void Sort(int mas[N_Max], int n)
{
	for(int i=0;i<n-1;i++)
		for(int j = i + 1; j<n;j++)
			if(mas[i] > mas[j])
				swap(mas[i], mas[j]);
}