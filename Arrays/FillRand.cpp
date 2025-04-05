#include "FillRand.h"

void FillRand(const int n, int  arr[])
{
	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 100;
	}
}
void FillRand(const int n, double  arr[])
{
	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(const int ROWS1, const int COLS2, int arr[ROWS][COLS], int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(const int ROWS1, const int COLS2, double arr[ROWS][COLS], int minRand, int maxRand)
{
	for (int i = 0; i < ROWS1; i++) {
		for (int j = 0; j < COLS2; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}