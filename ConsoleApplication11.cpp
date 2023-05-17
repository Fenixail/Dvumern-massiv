#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#define n 10
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int mas[n][n];
	int locMin = 0;
	int sum = 0;
	cout << "Матрица" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = rand() % 100 - 10;
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Минимум:" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i + 1][j+1]))
			{
				if (i == 0)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i][j + 1]))
			{
				if (i == 1)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i][j + 1]))
			{
				if (i == 2)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i + 1][j]))
			{
				if (i == 3)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j - 1]) && (mas[i][j] < mas[i + 1][j + 1]))
			{
				if (i == 4)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j+7]) && (mas[i][j] < mas[i][j-1]))
			{
				if (i == 5)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i+4][j]) && (mas[i][j] < mas[i][j - 1]))
			{
				if (i == 6)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[j-4][j]) && (mas[i][j] < mas[i-8][j]))
			{
				if (i == 7)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i- 4][j]) && (mas[i][j] < mas[i][j + 10]))
			{
				if (i == 8)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
			if ((mas[i][j] < mas[i][j-10]) && (mas[i][j] < mas[i+10][j]))
			{
				if (i == 9)
				{
					cout << "Строка " << i + 1 << " Столбец " << j + 1 << " min = " << mas[i][j] << endl;
					locMin++;
					break;
				}
			}
		}
	}
	cout << "Найти\t" << locMin << " Минимум";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + fabs(mas[i][j]);
		}
	}
	cout << " Сумма элементов над главной диагональю=\t" << sum << endl;
	return 0;
}