#pragma once
#include "constants.h"
#include "stdafx.h"

/*
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
template <typename T>
int MinValueIn(T  arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
T MaxValueIn(T arr[], const int n);
template <typename T>
int MaxValueIn(T  arr[ROWS][COLS], const int ROWS, const int COLS);*/


template <typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
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
template <typename T>
int MinValueIn(T  arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
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
template <typename T>
int MaxValueIn(T  arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

