#include <iostream>

int main()
{
    // Массив фиксированной длины
    const int N_Max = 100'000'000;
    int mas[N_Max] = {1,2,3,4};
    [] === *(mas+i)
    char firstDigit[N_Max];
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        std::cin >> mas[i];
        firstDigit[i] = mas[i];
        while(firstDigit[i] > 9)
        {
            firstDigit[i] /= 10;
        }
    }

    // Сортировка
    // SWAP SORT
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++) // sum(n-1, n-2, .. 0) = C*n^2/2
            if((firstDigit[i] > firstDigit[j]) ||
               (firstDigit[i] == firstDigit[j] && mas[i] > mas[j]))
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
                int tmp = firstDigit[i];
                firstDigit[i] = firstDigit[j];
                firstDigit[j] = tmp;
            }
    
    for(int i=0;i<n;i++)
        std::cout << mas[i] << " ";

    std::cout << "TEST" << std::endl;


	/*// 1. Найти сумму цифр числа
    int x = 123; // 321
    int y = 0;
    int sum = 0;
    int min = 9;
    // /, %
    while(x>0)
    {
        int d = x % 10;
        y = y*10 + d;
        // 3
        // 30 + 2
        // 320 + 1
        // ...
        sum = sum + d;
        if(d < min)
            min = d;
        x = x / 10;
    }

    // 2. Число-палиндром
    // 121

    // 3. Поиск мин/макс
    int n;
    int max = -20;
    bool first = true;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        std::cin >> x;
        if(-20 <= x && x <= 20)
        {
            if(max < x)
                max = x;
        }
    }

    // Определить, ялвяется ли число простым
    int x = 10;
    bool isPrime = true;
    for(int d = 2; d<=sqrt(x)+1; d++)
    {
        if(x % d != 0)
            continue;
        
        isPrime = false;
        break;
    }
    if(isPrime)
        std::cout << "Prime";
    else
        std::cout << "Not prime";

    
    */
    return 0;
}