#include <iostream>
#include <algorithm>
using namespace std;

namespace mt {
	void cout()
	{

	}
}

int main() 
{
	std::vector<int> vec;
	for(auto v : vec)
	{
		
	}
	int x;
	std::cin >> x;
	switch(x)
	{
		case '01': std::cerr << "111";
	}
	return 0;
	int s = 0;
	while(1)
	{
		s += 10;
		std::cout << "1" << std::endl;
	}
	/*
	// Счетчик (iterator, index)
	// 3.
	int i = 0;
	do
	{
		std::cout << i << std::endl;
		i++;
	} while (i < 10);
	
	
	// 2.
	int i = 0;
	int j = 10;
	while(1)
	{
		std::cout << i << std::endl;
		i++;
		j--;
	}
	// 1. for
	int sum = 0;
	for(int i=0; i < 10; i++)
	{
		if(i % 2 != 0)
			continue;
		
		std::cout << i << std::endl;
		sum = sum + i % 2;
		if(sum > 1000)
		{
			std::cout << i << std::endl;
			break;
		}
	}*/

	


	/*int max;
	// Условные операторы
	// 1. if..else
	int x, y;
	std::cin >> x >> y;
	bool tmp = (x*sin(x)*cos(x)*tan(x) > 0);
	if(tmp && y > 0) 
	{
	}
	else if(tmp && y < 0)
	{
	}

	std::cout << x << std::endl;*/

	/*// 2. Код ошибки
	int err = 2;
	switch(err)
	{
		case 1: 
		case 5: std::cout << "File error"; 
		        break;
		case 2: std::cout << "File error 1"; 
		        break;
		case 4: std::cout << "File error 2"; 
		        break;
		default:std::cout << "Unknown error";
	}

	// 3. Тернарный оператор
	int z = 2;
	std::cout << (z % 2 ? "Odd" : "Even");

	bool f = false;
	if(f == false)
	{

	}*/



	return 0;
}