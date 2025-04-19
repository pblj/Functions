#include "stdafx.h"
#include "evntcons.h"

template <typename T>
void printArray(T arr[], const int n);
template <typename T>
void printArray(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void SortArray(const int SIZE, T  brr[]);
template <typename T>
void SortArray(const int ROWS1, const int COLS1, T arr[ROWS][COLS]);

template <typename T>
void FillRand(const int n, T  arr[]);

void FillRand(const int ROWS1, const int COLS1,int arr[ROWS][COLS],int minRand = 0,int maxRand = 100);
//void FillRand(const int ROWS1, const int COLS1, double arr[ROWS][COLS]);
template <typename T>
T Sum(T arr[], const int n);
template <typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
double Avg(T arr[], const int n);
template <typename T>
double Avg(T  arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T MinValueIn(T arr[], const int n);

int MinValueIn(int  arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T MaxValueIn(T arr[], const int n);

int MaxValueIn(int  arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void ShiftLeft(T arr[], const int n,const int shifts);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

template <typename T>
void ShiftRight(T arr[], const int n,const int shifts);


void main() {

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(n, arr);
	printArray(arr, n);
	SortArray(n, arr);
	printArray(arr, n);
	cout << "Сумма элементов массива: " <<  Sum(arr,n) << endl;
	cout << "реднее арифметическое элементов массива: " << Avg(arr,n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	//int shifts;
	//cout << "Введите максимальное кол-во сдвигов: "; cin >> shifts;
	//ShiftLeft(arr, n, shifts);
	//printArray(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(SIZE, brr);
	printArray(brr, SIZE);
	SortArray(SIZE, brr);
	printArray(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	/*cout << "Введите максимальное кол-во сдвигов: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	printArray(brr, SIZE);
	cout << delimiter << endl;
	cout << "Введите максимальное кол-во сдвигов: "; cin >> shifts;
	ShiftRight(brr, SIZE, shifts);
	printArray(brr, SIZE);
	cout << delimiter << endl;*/

	//обьявление думерного массива:
	
	int i_arr_2[ROWS][COLS] = 
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};

	FillRand(ROWS, COLS, i_arr_2);
	printArray(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	SortArray(ROWS, COLS, i_arr_2);
	printArray(i_arr_2,ROWS, COLS) ;

	int shifts;
	cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	printArray(i_arr_2, ROWS, COLS);

}
template <typename T>
void SortArray(const int SIZE, T  brr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++) {
			if (brr[j] < brr[i])
			{
				T buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}
		}
	}
}
template <typename T>
void SortArray(const int ROWS1, const int COLS1, T arr[ROWS][COLS])
{
	int iterations = 0;
		int exchenges = 0;
	for (int i = 0; i < ROWS1; i++)
	{
		for (int j = 0; j < COLS1; j++)
		{
			for (int k = i; k < ROWS1; k++)
			{
				for (int l = (k == i ?j+1:0); l < COLS1; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
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
template <typename T>
void FillRand(const int n, T  arr[])
{
	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 100;
	}
}

void FillRand(const int ROWS1, const int COLS2, int arr[ROWS][COLS],int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand()%(maxRand - minRand)+minRand;
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
template <typename T>
void printArray(T arr[],const int n) {

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}
template <typename T>
void printArray(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
template <typename T>
T Sum(T arr[], const int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}
template <typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template <typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}

template <typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template <typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;

}

int MinValueIn(int  arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
template <typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;

}

int MaxValueIn(int  arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
template <typename T>
void ShiftLeft(T arr[], const int n, const int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}

}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shifts);
	}*/
	ShiftLeft(arr[0], ROWS * COLS, shifts);
}
template <typename T>
void ShiftRight(T arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}