#include <func.hpp>
#include <iostream>
#include <string>
#include <fstream>

std::string toLowerCase(std::string s)
{
    for(int i=0;i<s.length();i++)
    {
        if('A' <= s[i] && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
}

bool isLetter(char c)
{
    if(('A' <= c && c <= 'Z') ||
       ('a' <= c && c <= 'z'))
       return true;
    return false;
}

void RemoveOtherSymbols(std::string& s)
{
    for(int i=0;i<s.length();i++)
        if(!isLetter(s[i]))
        {
            s.erase(i, 1);
            i--;
        }          
}

int CountEqualLetters(std::string s)
{
    s = toLowerCase(s);
    char letters[256] = {0};
    for(int i=0;i<s.length();i++)
        if(isLetter(s[i]))
            letters[s[i]]++;
    // Максимум найти
}

int main()
{
    char c1 = 'a';
    char c2 = 97;
    std::cout << c1 << " " << c2 << std::endl;

    char str[100];// = "Hello, world";
    str[0] = 'H';
    str[1] = 'e';
    str[2] = '\n';
    str[3] = '\0';
    std::cout << str << std::endl;

    // std::string
    std::string s = "Hello, world";
    std::cout << s << std::endl;

    s[1] = 'a';
    std::cout << s << std::endl;

    // Длина строки
    std::cout << s.length() << std::endl;

    // Конкатенация
    std::string s1 = "Hello";
    std::string s2 = "world";
    std::string s3 = s1 + " " + s2;

    // Удаления
    s3.clear();
    s3 = "";

    s1.erase(1, 1);
    std::cout << s1 << std::endl;

    // Вставить элемент
    s1.insert(1, 1, 'E');
    std::cout << s1 << std::endl;

    // Поиск элемента
    std::cout << s1.find('A') << std::endl;
    if(s1.find('A') != std::string::npos)
    {

    }
    // rfind

    // Сравнение строк - лексикографически
    std::string s4 = "Abbb";
    std::string s5 = "abbb";
    std::cout << (toLowerCase(s4) == toLowerCase(s5)) << std::endl;
    // <, >, !=, ==, <=, >=
    // lower case
    // upper case

    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    if(!in.is_open())
    {
        std::cout << "File not found" << std::endl;
        return -1;
    }

    int n;
    in >> n;

    // Построчно
    // По словам
    // По символам

    std::string words[2000];
    int m = 0;
    int count[2000];

    while(!in.eof())
    {
        std::string s;
        // По словам
        in >> s;
        RemoveOtherSymbols(s);
        words[m] = s;
        count[m] = CountEqualLetters(s);
        m++;
        // По строкам
        //std::getline(in, s);
        // По символам
        //char c;
        //in >> c;
        std::cout << "<" << s << ">" << std::endl;
        out << "<" << s << ">" << std::endl;
    }


    return 0;
}