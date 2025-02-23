#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>

/*
 * struct di bawah merepresentasikan
 * matrix 2x2 dengan konfigurasi:
 *
 * [a b]
 * [c d]
*/

typedef struct {
	int a; int b;
	int c; int d;
} Matrix;

Matrix newMatrix(int a, int b, int c, int d){
	Matrix m;
	m.a = a;
	m.b = b;
	m.c = c;
	m.d = d;
	return m;
}; 

void printMatrix(Matrix m){

};

Matrix add(Matrix m1, Matrix m2){

};

Matrix subtract(Matrix m1, Matrix m2){

};

void transpose(Matrix *m){

};

int determinant(Matrix m){

};

#endif 
