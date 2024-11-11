#include <iostream>
#include <fstream>
#include <vector>
#pragma comment(linker, "/STACK:16777216")

using namespace std;

void quickSort(int *arr, int size)
{
int i = 0;
int j = size - 1;
int mid = arr[size / 2];
do {
while (arr[i] < mid)
{
i++;
}
while (arr[j] > mid)
{
j--;
}
if (i <= j)
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;
j--;
}
} while (i <= j);
if (j > 0)
{
quickSort(arr, j + 1);
}
if (i < size)
{
quickSort(&arr[i], size - i);
}
}

int main()
{
	std::vector<int> arr;
	
//int arr[3'000'000];
int n;
//std::ifstream in("input.txt");
//std::ofstream out("output.txt");
FILE* in = fopen("input.txt", "r");
FILE* out = fopen("output.txt", "w");
fscanf(in, "%d", &n);
//arr.reserve(n);
for (int i = 0 ; i < n; i++)
{
	int x;
	fscanf(in, "%d", &x);
	arr.push_back(x);
}
quickSort(arr.data(), n);
for (int i = 0 ; i < n ; i++)
{
fprintf(out, "%d ", arr[i]);
}
}
	/*
	int n = 10;
	int mas[N_Max];
	Read(mas, n);
	if(isFirstDigitOne(mas, n))
		Sort(mas, n);
	Write(mas, n);
	return 0;
	*/
