#include <stdio.h>
int sum_auxiliary_diaganal(int matrix[] [100], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += matrix[i] [size - 1 - i];
	}
	return sum;
} 

int main() {
	int size;
	printf("Enter the size of the matrix: ");
	scanf("%d", &size);

	int matrix[100] [100];
	printf("Enter the elements of the matrix:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", &matrix[i] [j]);
		}
	}
	int auxiliarySum = sum_auxiliary_diaganal(matrix, size);
	printf("The sum of the auxiliary diaganal elements is: %d\n", auxiliarySum);
}
