#include "pch.h"

#include "shellSort.h"
#include "quicksort.h"
TEST(shellSort, SingleElementArray) {
    int arr[] = { 5 };
    shellSort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(shellSort, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    shellSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shellSort, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    shellSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(shellSort, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    shellSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shellSort, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    shellSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(shellSort, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    shellSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(quicksort, SingleElementArray) {
    int arr[] = { 5 };
    quicksort(arr, 1, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(quicksort, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    quicksort(arr, 0, 4);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(quicksort, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    quicksort(arr, 0, 4);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(quicksort, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    quicksort(arr, 0, 3);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(quicksort, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    quicksort(arr, 0, 4);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(quicksort, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    quicksort(arr, 0, 4);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


