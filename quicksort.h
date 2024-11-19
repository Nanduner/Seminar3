#pragma once
template <typename T>
void quicksort(T* arr, int low, int high);
template void quicksort<int>(int[], int, int);
template void quicksort<double>(double[], int, int);