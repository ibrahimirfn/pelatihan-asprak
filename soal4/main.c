#include "matrix.h"
#include "stdio.h"

int main()
{
	Matrix m1 = newMatrix(1, 6, 3, 4);
	Matrix m2 = newMatrix(4, 4, 8, 13);
	Matrix m3 = add(m1, m2);
	Matrix m4 = subtract(m2, m1);
	int d_m4 = determinant(m4);
	transpose(&m3);
	printMatrix(m4);
	printf("%d\n", d_m4);
	return 0;
}
