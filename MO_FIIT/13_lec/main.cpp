#include <iostream>
#include <thread>
#include <algorithm>
#pragma comment(linker, "/STACK:16777216")

bool isEven(int x) {
    return x % 2 == 0;
}

bool isDivBy7(int x) {
    return x % 7 == 0;
}

int foo(int* arr, int n, bool (*f)(int)) {
    int result = 0;
    for(int i=0;i<n;i++) {
        if(f(arr[i]))
            result++;
    }
    return result;
}

void QuickSort(int a, int b, int* arr) {
    if(a>=b)
        return;
    // Выбор опорного элемента
    int k = (rand()*rand()) % (b-a+1) + a;
    int m = arr[k];
    // Пресорт
    int l = a - 1;
    int r = b + 1;
    while(true) {
        do l++; while(arr[l] < m);
        do r--; while(arr[r] > m);
        if(l >= r) 
            break;
        std::swap(arr[l], arr[r]);
    }
    l = r;
    r++;
    QuickSort(a, l, arr);
    QuickSort(r, b, arr);
}

int main() {


    srand(time(0));
    const int n = 1'000'000;
    int arr[n] = {2, 3, 1, 6, 4};

    std::cout << foo(arr, n, [](int x) { 
                                x++;
                                return x % 7 == 0; 
                             });

    //QuickSort(0, n-1, arr);
    std::sort(arr, arr + n);

    std::cout << "===" << std::endl;
    for(int i=n-10;i<n;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}