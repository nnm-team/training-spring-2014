//Bubble sort algorithm
// Only for one-dimensional arrays
// Author: Homitsevich Nikita
////////////////////////////////////////
#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>

using namespace std;
void MAIN();
void random_array_input(int *, int);
void array_output(int *, int); 
void BubbleSort(int *, int);

int main() {
	MAIN();
}


void MAIN() {
	//setlocale(LC_ALL, "") // add any possible language
	srand(time(NULL));
	int N;
	cout << "Input an arrays length: ";
	cin >> N;
	int *NewArray = new int[N];
	random_array_input(NewArray, N);
	BubbleSort(NewArray, N);	
	array_output(NewArray, N);

}

void random_array_input(int *arr, int n) {
	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 50 + 1;
}

void array_output(int *arr, int n) {
	cout << setw(1) << "  ||  ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "  ||  " << endl;
}

void BubbleSort(int *arr, int n) {
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			if (arr[j] > arr[j+1]) { 
				arr[j] = arr[j] ^ arr[j+1];
				arr[j+1] = arr[j] ^ arr[j+1];
				arr[j] = arr[j] ^ arr[j+1];
			}
		}
}
