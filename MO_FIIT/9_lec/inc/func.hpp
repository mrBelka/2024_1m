#pragma once

namespace mt
{
    // Заголовок функции (сигнатура)
    // Тип возвр. значения, название, список аргументов
    int sum(int a, int b);
    bool isPrime(int x);
    // Функция: первую цифру числа и сумму цифр
    int firstDigit(int x);
    int sumOfDigits(int x);
    void print(int n);
    void swap(int& a, int& b);
    void Read(int mas[10000], int& n);
    void Write(int mas[10000], int n);
    void Sort(int mas[10000], int n);
    bool ExistNumberWithSum19(int mas[10000], int n);
}