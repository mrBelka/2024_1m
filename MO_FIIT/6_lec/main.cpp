#include <iostream>
#include <fstream>
#include <algorithm>
#pragma comment(linker, "/STACK:16777216")

int main()
{
    FILE* in = fopen("input.txt", "r");
    FILE* out = fopen("output.txt", "w");

    int mas[3'000'000];
    int n;
    fscanf(in, "%d", &n);
    for(int i=0;i<n;i++)
        fscanf(in, "%d", &mas[i]);

    std::sort(mas, mas+n);

    for(int i=0;i<n;i++)
        fprintf(out, "%d ", mas[i]);// << " ";

    /*// 3
    int matrix[100][100];

    int n,m;
    std::cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            std::cin >> matrix[i][j];

    // Вывод
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }*/


    /*// 4
    const int N_Max = 20000;
    int mas[N_Max];
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++)
        std::cin >> mas[i];

    // Удаление
    for(int i=0;i<n;i++)
    {
        // Палиндром???
        int x = mas[i]; // 123
        int y = 0;
        while(x > 0)
        {
            y = y*10 + x%10; // 320 + 1
            x/=10; // 0
        }
        // y = 321;
        if(x == y)
        {
            for(int j = i; j<n-1;j++)
                mas[j] = mas[j+1];
            i--;
            n--;
        }
    }

    // Дублирование
    for(int i=0;i<n;i++)
    {
        if(// простое число)
        {
            for(int j = n;j>i;j--)
                mas[j] = mas[j-1];
            i++;
            n++;   
        }
    }

    // 2
    const int N_Max = 10000;
    int mas[N_Max];

    int n;
    std::cin >> n;

    // Ввод
    for(int i=0;i<n;i++)
        std::cin >> mas[i];



    // 1 
    const int N_Max = 10000;
    int mas[N_Max];
    char minI[N_Max];
    char firstI[N_Max];

    int n;
    std::cin >> n;

    // Ввод
    for(int i=0;i<n;i++)
        std::cin >> mas[i];

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            // 123
            int minI = 9;
            int firstI = mas[i];
            while(firstI > 9) 
            {
                firstI /= 10;
                int d = firstI % 10; // 2
                if(d < minI)
                    minI = d; // 2
            }
            int d = firstI % 10; // 2
            if(d < minI)
                minI = d;
            // 

            int minJ = 9;
            int firstJ = mas[j];
            while(firstJ > 9)
            {
                int d = firstJ % 10; // 2
                if(d < minJ)
                    minJ = d;
                firstJ /= 10;
            }
            int d = firstJ % 10; // 2
            if(d < minJ)
                minJ = d;

            if((firstI > firstJ) ||
               (firstI == firstJ && minI > minJ) ||
               (firstI == firstJ && minI == minJ
                    && mas[i] > mas[j]))
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
        }

    // Вывод
    for(int i=0;i<n;i++)
        std::cout << mas[i] << " ";

    // Обработка
    // Проверить, а есть ли число, начинающееся цифрой 1
    bool isFirstDigitExists = false;
    for(int i=0;i<n;i++)
    {
        int firstDigit = mas[i];
        while(firstDigit > 9)
            firstDigit = firstDigit / 10;

        if(firstDigit == 1)
        {
            isFirstDigitExists = true;
            break;
        }
    }

    // Сортировка
    if(isFirstDigitExists)
    {
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++) // 10*n^2/2 .. n*log(n)
                if(mas[i] > mas[j])
                {
                    int tmp = mas[i];
                    mas[i] = mas[j];
                    mas[j] = tmp;
                }
    }

    // Вывод
    for(int i=0;i<n;i++)
        std::cout << mas[i] << " ";
*/
    return 0;
}