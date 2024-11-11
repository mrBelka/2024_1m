#include <iostream>
#include <func.hpp>
#include <string>
#include <fstream>

// return value optimization = RVO
std::string to_lower(const std::string& s)
{
	std::string result = s;
	for(int i=0;i<result.length();i++)
		if('A' <= result[i] && result[i] <= 'Z')
			result[i] += 32; // переход к строчным буквам
	return result;
}

int main()
{
	/*
	// Символ
	char c1 = 'a';
	char c2 = 97;
	char s[14] = "Hello\n world!";
	s[13] = 97;
	for(int i=0;i<15;i++)
	{
		std::cout << "<" << s[i] << ">" << " " << (int)s[i] << std::endl;
	}
	std::cout << s << std::endl;
	*/

	std::string s = "Hello, world!";
	std::cout << s << std::endl;
	s[1] = 'a';
	std::cout << s << std::endl;

	// Конкатенация
	std::string s1 = "Hello";
	std::string s2 = "world";

	std::string s3 = s1 + " " + s2;
	std::cout << s3 << std::endl;

	// Удалить элемент
	std::string s4 = "Hello";
	s4.erase(2, 1);
	std::cout << s4 << std::endl;

	// Вставить
	std::string s5 = "Hello";
	s5.insert(1, 2, 'a');
	std::cout << s5 << std::endl;

	// Поиск
	std::string s6 = "Hello";
	if(s6.find('E') != std::string::npos)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	// Пустая строка
	std::string s7;
	s7 = s7 + 'a';
	s7 = "";

	std::cout << s7 << std::endl;

	// Длина строки
	std::cout << s7.length() << std::endl;

	char str[100] = "Hello";
	int i = 0;
	int cnt = 0;
	while(str[i] != 0)
	{
		cnt++;
		i++;
	}

	// Сравнение строк
	std::string s8 = "Hello";
	std::string s9 = "hello";
	// <, >, !=, ==

	// lower case, upper case

	//std::cout << (to_lower(s8) == to_lower(s9)) << std::endl;

	// Поиск подстроки
	std::string s10 = "Hello";
	s10.find("Hel");

	// Получение подстроки из строки
	std::cout << s10.substr(s10.find("Hel"), 3) << std::endl;

	// Файловый ввод-вывод
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");
	if(!in.is_open())
	{
		std::cout << "File error" << std::endl;
		return -1;
	}

	while(!in.eof())
	{
		char c;
		std::string s;
		// До проблела
		//in >> s;
		// До конца строки
		// getline(in, s);
		in >> c;
		std::cout << c << std::endl;
		out << c << std::endl;
	}

	return 0;
}