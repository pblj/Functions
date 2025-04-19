#pragma once
#include "constants.h"
#include "stdafx.h"

/*
template <typename T>
void FillRand(const int n, T  arr[]);

void FillRand(const int ROWS1, const int COLS1,int arr[ROWS][COLS],int minRand = 0,int maxRand = 100);
//void FillRand(const int ROWS1, const int COLS1, double arr[ROWS][COLS]);
*/

template <typename T>
void FillRand(const int n, T  arr[])
{
	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 100;
	}
}
template <typename T>
void FillRand(const int ROWS1, const int COLS2, T arr[ROWS][COLS], int minRand=1, int maxRand=100)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
//template <typename T>
//void FillRand(const int ROWS1, const int COLS2, T arr[ROWS][COLS], int minRand, int maxRand)
//{
//	for (int i = 0; i < ROWS1; i++) {
//		for (int j = 0; j < COLS2; j++)
//		{
//			arr[i][j] = rand() % (maxRand - minRand) + minRand;
//		}
//	}
//}