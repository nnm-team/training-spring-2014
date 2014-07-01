//Insert sort algorithm
// Only for one-dimensional arrays
// Author: Homitsevich Nikita
// Asymptotic complexity of the InsertSort: O(n^2)
////////////////////////////////////////
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

void create_arr(int *, int);
void print_arr(int *, int);
void InsertSort(int *, int);

int main()
{
    srand(time(NULL));
    int x;
    cout << "Input an array's size: ";
    cin >> x;
    int *mas = new int[x];

    create_arr(mas, x);
    cout << "Unsorted array: ";
    print_arr(mas, x);
    InsertSort(mas, x);
    cout << "Sorted array: ";
    print_arr(mas, x);

    return 0;
}

void create_arr(int *arr, int x) {
    for (int i = 0; i < x; ++i)
        arr[i] = rand() % 100;
}

void print_arr(int *arr, int x) {
    for (int i = 0; i < x; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void InsertSort(int *arr, int x) {
    for (int i = 1; i < x; ++i)
        for (int j = i; j > 0 && arr[j-1] > arr[j]; --j)
            swap(arr[j-1], arr[j]);
}
