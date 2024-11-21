#include <iostream>
#include <thread>

int main()
{
	int x = 1000;
	std::cout << &x << std::endl; // взятие адреса

	int* p = &x;
	std::cout << p << std::endl;
	std::cout << *p << std::endl;	// разыменование

	unsigned char* c = reinterpret_cast<unsigned char*>(p);
	std::cout << c << std::endl;
	std::cout << static_cast<int>(*c) << std::endl;
	std::cout << static_cast<int>(*(c+1)) << std::endl;
	std::cout << static_cast<int>(*(c+2)) << std::endl;
	std::cout << static_cast<int>(*(c+3)) << std::endl;
	//std::cout << *(p+1) << std::endl;

	int mas[10];
	std::cout << mas << std::endl;
	std::cout << mas[1] << " " << (mas+1) << std::endl;

	int** matrix = new int*[100];
	for(int i=0;i<100;i++)
		matrix[i] = new int[100];

	// Process
	matrix[0][0] = 123;

	for(int i=0;i<100;i++)
		delete[] matrix[i];
	delete[] matrix;
	return 0;
}