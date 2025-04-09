#include "Sort.h"

void SortArray(const int SIZE, int  brr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++) {
			if (brr[j] < brr[i])
			{
				int buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}
		}
	}
}
void SortArray(const int SIZE, double  brr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++) {
			if (brr[j] < brr[i])
			{
				double buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}
		}
	}
}
void SortArray(const int ROWS1, const int COLS1, int arr[ROWS][COLS])
{
	int iterations = 0;
	int exchenges = 0;
	for (int i = 0; i < ROWS1; i++)
	{
		for (int j = 0; j < COLS1; j++)
		{
			for (int k = i; k < ROWS1; k++)
			{
				for (int l = (k == i ? j + 1 : 0); l < COLS1; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchenges++;
					}
				}
			}
		}
	}
	cout << "Итераций: " << iterations << endl;
	cout << "Обменов: " << exchenges << endl;
}