#pragma once
#include "constants.h"
#include "stdafx.h"

/*
template <typename T>
void ShiftLeft(T arr[], const int n,const int shifts);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

template <typename T>
void ShiftRight(T arr[], const int n,const int shifts);
*/
template <typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	
	ShiftLeft(arr[0], ROWS * COLS, shifts);
}
template <typename T>
void ShiftRight(T arr[], const int n, const int shifts)
{
	ShiftLeft(arr, n, n - shifts);
}