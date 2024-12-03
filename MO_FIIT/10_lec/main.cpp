#include <iostream>
#include <thread>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int* f()
{
    int x = 1000;
    std::cout << &x << " " << x << std::endl;
    return &x;
}

int main()
{
    int n = 3, m = 3;
    int** matrix = new int*[n];
    for(int i=0;i<n;i++)
        matrix[i] = new int[m];
    
    matrix[0][1] = 1;

    for(int i=0;i<n;i++)
        delete[] matrix[i];
    delete[] matrix;



    /*
    int n;
    std::cin >> n;
    int* p = new int[n];

    p[0] = 1000;

    delete[] p;
    */


    /*

    int* pp = f();
    std::cout << pp << " " << *pp << std::endl;

    return 0;
    */
    /*int x = 1000;
    std::cout << &x << std::endl;
    int* p = &x; // Указатель, 8 байтов
    std::cout << p << " " << *p << std::endl;

    int mas[10] = {1,2,3,4};
    std::cout << *mas << " " << mas[0] << std::endl;
    std::cout << *(mas + 1) << mas[1] << std::endl;

    //
    unsigned char c[4] = {232, 3, 0, 0};
    std::cout << c << std::endl;
    std::cout << c + 1 << std::endl;
    std::cout << (int)*c << std::endl;
    std::cout << (int)*(c + 1) << std::endl;

    int* pp = (int*)c;
    std::cout << *pp << std::endl;

    int a = 5;
    int b = 10;
    //swap(&a, &b);

    int* ppp = &a;
    std::cout << &(*ppp);

    int** m = &ppp;

    int* p2;
    int** p1 = &p2;
    int*** p2 = &p1;*/
}