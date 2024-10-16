#include <iostream>
#define N_MAX 10

int main() 
{
	const int N_Max = 3;
	const int M_Max = 3;
	int matrix[N_Max][M_Max];

	int n,m;
	std::cin >> n >> m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			std::cin >> matrix[i][j];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}

	/*
	const int N_Max = 20000;
	int n = 5;
	int mas[N_Max] = {12, 14, 54, 32, 7};

	// Удаление
	int j = 0;
	for(int i=0;i<n;i++)
	{
		if(mas[i] == 1)
			continue;
		mas[j] = mas[i];
		j++;
	}
	n = j;

	// Дублирование
	for(int i=0;i<n;i++)
		if(mas[i] == 2)
		{
			for(int j=n;j>i;j--)
			{
				mas[j] = mas[j-1];
			}
			i++;
			n++;
		}
		*/
 
	/*
	const int N_Max = 100'000'000;
	int mas[N_Max]; // 400 мб
	char firstDigit[N_Max]; // 100 мб
	
	// Ввод
	int n;
	std::cin >> n;
	for(int i=0;i<n;i++)
	{
		std::cin >> mas[i];
		firstDigit[i] = mas[i];
		while(firstDigit[i] > 9) firstDigit[i] /= 10;
	}

	// Сортировка SWAP SORT
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			// Расчет

			if((firstDigit[i] < firstDigit[j]) ||
			   (firstDigit[i] == firstDigit[j] && mas[i] < mas[j]))
			{
				int tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
				tmp = firstDigit[i];
				firstDigit[i] = firstDigit[j];
				firstDigit[j] = tmp;
			}
		}

	// Вывод
	for(int i=0;i<n;i++)
		std::cout << mas[i];
	*/
	return 0;
}