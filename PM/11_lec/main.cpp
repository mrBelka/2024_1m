#include <iostream>

namespace mt
{
	struct Test {};
	void foo(Test) {}
	void bar() {}
}

int main()
{
	std::cout << (-123%10);
}



/*
#include <iostream>
#include <func.hpp>

int main()
{
	mt::Node* head;
	Make(head);
	mt::PushBack(head, 1);
	mt::PushBack(head, 3);
	mt::PushBack(head, 5);
	mt::Print(head);
	std::cout << std::endl;

	mt::Remove(head, 3);
	mt::Print(head);

	Clear(head);
	std::cout << "123";
	return 0;
}
*/


/*
#include <iostream>

void f(int n)
{
	for(int i=0;i<n;i++)
		std::cout << i << std::endl;
}

void g(std::string& s)
{

}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	// Ссылка
	int y = 123;
	int& x = y;
	x+=10;
	y+=10;
	std::cout << &x << " " << &y << std::endl;

	int a = 10;
	int b = 5;
	swap(a, b);

	int* p = new int[10];

	delete p;
	return 0;
}
*/