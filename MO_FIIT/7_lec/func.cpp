#include <func.hpp>
#include <iostream>

namespace mt
{
    // Заголовок функции (сигнатура)
    // Тип возвр. значения, название, список аргументов
    int sum(int a, int b)
    {
        int c = a + b;
        return c;   // остановка выполнения функции
    }

    bool isPrime(int x)
    {
        if(x<2)
            return false;
        int sqrtX = static_cast<int>(sqrt(x));
        for(int d=2;d<=sqrtX;d++)
            if(x % d == 0)
                return false;
        return true;
    }

    // Функция: первую цифру числа и сумму цифр
    int firstDigit(int x)
    {
        while(x>9)
            x /= 10;
        return x;
    }

    int sumOfDigits(int x)
    {
        int sum = 0;
        while(x>0)
        {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    void print(int n)
    {
        for(int i=0;i<n;i++)
            std::cout << i << std::endl;
    }

    void swap(int& a, int& b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    void Read(int mas[10000], int& n)
    {
        std::cin >> n;
        for(int i=0;i<n;i++)
            std::cin >> mas[i];
    }

    void Write(int mas[10000], int n)
    {
        for(int i=0;i<n;i++)
            std::cout << mas[i] << " ";
    }

    void Sort(int mas[10000], int n)
    {
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(mas[i] < mas[j])
                    swap(mas[i], mas[j]);
    }

    bool ExistNumberWithSum19(int mas[10000], int n)
    {
        for(int i=0;i<n;i++)
            if(sumOfDigits(mas[i]) == 19)
                return true;
        return false;
    }
}