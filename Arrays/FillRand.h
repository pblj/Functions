#pragma once
#include "stdafx.h"
#include "constants.h"

void FillRand(const int n, int  arr[]);
void FillRand(const int n, double  arr[]);
void FillRand(const int ROWS1, const int COLS1, int arr[ROWS][COLS], int minRand = 0, int maxRand = 100);
//void FillRand(const int ROWS1, const int COLS1, double arr[ROWS][COLS]);