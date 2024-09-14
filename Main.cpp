#include "Matrix.h"
#include "Converter.h"
#include "RNSOperations.h"

int main()
{
	/*srand(static_cast<unsigned int>(time(0)));
	int matrixSize = 3;
	Matrix A(matrixSize);
	Matrix B(matrixSize);

	A.setMatrix(Matrix::createRandMatrix(matrixSize, 0, 100));
	B.setMatrix(Matrix::createRandMatrix(matrixSize, 0, 100));

	A.printMatrix();
	B.printMatrix();
	
	Matrix::matrixMultiplication(A, B).printMatrix();
	Matrix::matrixSummary(A, B).printMatrix();

	Converter::intToMatrix(52, { 3,5,7 });
	Converter::matrixToInt(Matrix({ 1,2,3 }), { 3,5,7 });*/

	RNSOperations::addition(Matrix({ 1,0,4 }), Matrix({ 0,2,4 }), { 2,3,5 });
	RNSOperations::mutiplication(Matrix({ 0,1,4 }), Matrix({ 1,2,0 }), { 2,3,5 });

}

