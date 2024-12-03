#include <iostream>

int x = 0; // Статическая память

void foo(const std::string& s)
{
    // Считаю кол-во согласных
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int afjkajfkshdfjhsdjklf = 10;
    int b = 5;
    swap(afjkajfkshdfjhsdjklf, b);
    int& r = afjkajfkshdfjhsdjklf;
    r++;
    std::cout << r << " " << afjkajfkshdfjhsdjklf;

    return 0;


    int** mat = new int*[100]; // стек 8, хип 800
    for(int i=0;i<100;i++)
        mat[i] = new int[200];

    mat[0][0] = 0;

    for(int i=0;i<100;i++)
        delete[] mat[i];
    delete[] mat;

    return 0;
}
