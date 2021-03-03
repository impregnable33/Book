#include <stdio.h>

void insertion_sort(int A[], int n);

int main()
{
	int A[6] = {5, 2, 4, 6, 1, 3};

	insertion_sort(A, 6);

	for (int i = 0; i < 6; ++i)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}

void insertion_sort(int A[], int n)
{
	for (int i = 1; i < n; ++i) {
		int key = A[i];
		
		int j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			--j;
		}

		A[j + 1] = key;
	}
}
