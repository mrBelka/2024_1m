#include <iostream>
//#include <limits.h>
#include <windows.h>

int main(int argc, char** argv) 
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	for(int i=0;i<argc;i++)
	{
		std::cout << argv[i] << std::endl;
	}

	int x;
	std::cin >> x;
	std::cout << "Hello, world!" << std::endl;
	/*
	// break, continue
	int sum = 0;
	while(1)
	{
		int x;
		std::cin >> x;
		if(x%2 == 0)
			continue;

		sum += x;
		if(sum > 100)
			break;
	}


	int n;
	int max;//std::numeric_limits<int>::min();//INT_MIN;
	bool first = true;
	std::cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		std::cin >> x;
		if(first)
		{
			max = x;
			first = false;
		}
	}


	int x = 123;
	int max = 0;
	int mult = 1;
	// Алгоритм распаковки натурального числа
	while(x>0)
	{
		int digit = x%10;
		mult *= digit;
		if(max < digit)
			max = digit;
		x/=10;
	}
	


	int i = 9; // Счетчик
	while(i>=0)	// Проверка условия
	{
		std::cout << i << std::endl;
		i--;	// Действие со счетчиком
	}

	for(int i=0;i<10;i++)
	{
		std::cout << i << std::endl;
	}

	int i = 0;
	do
	{
		std::cout << i << std::endl;
		i++;
	} while (i<10);
	*/

	/*
	int m = 3;
	if(5 == m)
	{

	}


	// 3. ternary
	int v = 2;
	std::cout << (v%2==0 ? "Even" : "Odd") << std::endl;

	// 2. switch
	// 5 = mark

	int mark = 4;
	switch(mark)
	{
		case 2:break;
		case 3:break;
		case 4:std::cout << "Four" << std::endl;
		       std::cout << "Four" << std::endl;
			   break;
		case 5:std::cout << "Five" << std::endl;
		       break;
		default:std::cout << "Default" << std::endl;
	}


	if(mark == 4)
		std::cout << "Four" << std::endl;
	else if(mark == 5)
		std::cout << "Four" << std::endl;
	else if(mark == 5)
		std::cout << "Four" << std::endl;



	// 1. if..else
	bool f = true;
	if(!(10 % 2))
	{
		//....
	}

	int z = 10;
	int u = 123;
	if((0 <= z && z <= 100) || 
	    u%2 == 0)
	{

	}

	int x = 10;
	int y = 2;
	if(x>0) 
	{
		if(y%2 == 0)
		{
			std::cout << "Test" << std::endl;
		}
		// ...
		std::cout << "Positive" << std::endl;
	}
	else if(x==0)
	{
		std::cout << "Zero" << std::endl;
	}
	else
	{
		std::cout << "Negative" << std::endl;
	}
	
	//
	*/
	return 0;
}