#pragma once
#include "stdafx.h"
#include "constants.h"

void ShiftLeft(int arr[], const int n, const int shifts);
void ShiftLeft(double arr[], const int n, const int shifts);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

void ShiftRight(double arr[], const int n, const int shifts);
