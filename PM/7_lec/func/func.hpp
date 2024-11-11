#pragma once

const int N_Max = 10'000;

// Функция определения простоты числа
bool isPrime(int x);
// Сумма цифр числа
int sumOfDigits(int x);

// int a - передача по значению (копия)
// int& a - передача по ссылка
void swap(int& a, int& b);
void Read(int mas[N_Max], int& n);
bool isFirstDigitOne(int mas[N_Max], int n);
void Sort(int mas[N_Max], int n);
void Write(int mas[N_Max], int n);