void quicksort(int *arr, int first, int last)  
{
	int i = first, j = last, m = (i + j) / 2, mid = arr[m];
	do {	
		while (arr[i] < mid) { i += 1; }
		while (arr[j] > mid) { j -= 1; }
		if (i <= j) {
			if (arr[i] > arr[j]) 
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
			}
			i++; j--;
		}
	}
		while (i <= j);
		if (first < j)	quicksort(arr, first, j);
		if (last > i)	quicksort(arr, i, last);
}