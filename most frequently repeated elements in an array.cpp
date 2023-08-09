#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int mostFrequent(int arr[], int n)
{
	
	qsort(arr, n, sizeof(int), cmpfunc);
	int max_count = 1, res = arr[0], curr_count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else
			curr_count = 1;
		
		if (curr_count > max_count) {
			max_count = curr_count;
			res = arr[i - 1];
		}
	}
	
	return res;
}
int main()
{
	int arr[] = { 40,50,30,40,50,30,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", mostFrequent(arr, n));
	return 0;
}


