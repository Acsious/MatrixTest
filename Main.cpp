#include "Matrix.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int matrixSize = 3;
	Matrix A(matrixSize);
	Matrix B(matrixSize);

	A.setMatrix(Matrix::createRandMatrix(matrixSize, 0, 100));
	B.setMatrix(Matrix::createRandMatrix(matrixSize, 0, 100));

	A.printMatrix();
	B.printMatrix();
	Matrix::matrixMultiplication(A, B).printMatrix();
	Matrix::matrixSummary(A, B).printMatrix();
}

