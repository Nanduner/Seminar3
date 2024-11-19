#include "pch.h"
#include "quicksort.h"
template <typename T>
void quicksort(T* arr, int low, int high) {
    if (low < high) {
        T pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]); \
        int partitionIndex = i + 1;

       
        quicksort(arr, low, partitionIndex - 1);
        quicksort(arr, partitionIndex + 1, high);
    }
}