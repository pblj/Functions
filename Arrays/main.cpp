#include "stdafx.h" //"" - сначало в каталоге с проектом <> - в системных
#include "constants.h" 
#include "FillRand.h" 
#include "Print.h" 
#include "Statistics.h"
#include "Sort.h"
#include "Shifts.h"

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





