#include "Matrix.h"
using namespace std;

Matrix::Matrix(int n)
{
	matrixSize = n;
	for (int i = 0; i < matrixSize; ++i)
	{
		matrix.push_back(vector<int>(matrixSize,0));
	}
}

Matrix::Matrix(vector<int> value)
{
	matrixSize = value.capacity();
	matrix.push_back(value);
}

Matrix Matrix::createRandMatrix(int size, int min, int max)
{
	Matrix result(size);
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			result.matrix[i][j] = rand() % (max - min) + min;
		}
	}
	return result;
}

Matrix Matrix::matrixSummary(Matrix firstMatrix, Matrix secondMatrix)
{
	Matrix result(firstMatrix.matrixSize);
	for (int i = 0; i < firstMatrix.matrixSize; ++i)
	{
		for (int j = 0; j < firstMatrix.matrixSize; ++j)
		{
			result.matrix[i][j] = firstMatrix.matrix[i][j] + secondMatrix.matrix[i][j];
		}
	}
	return result;
}

Matrix Matrix::matrixMultiplication(Matrix firstMatrix, Matrix secondMatrix)
{
	Matrix result(firstMatrix.matrixSize);
	for (int i = 0; i < firstMatrix.matrixSize; ++i)
	{ 
		for (int j = 0; j < firstMatrix.matrixSize; ++j)
		{
			for (int w = 0; w < firstMatrix.matrixSize; ++w)
			{
				result.matrix[i][j] += firstMatrix.matrix[i][w] * secondMatrix.matrix[w][i];
			}
		}
	}
	return result;
}

void Matrix::setMatrix(Matrix newMatrix)
{
	for (int i = 0; i < newMatrix.matrixSize; ++i)
	{
		for (int j = 0; j < newMatrix.matrixSize; ++j)
		{
			matrix[i][j] = newMatrix.matrix[i][j];
		}
	}
}

vector<vector<int>> Matrix::getMatrix()
{
	return matrix;
}

void Matrix::printMatrix()
{
	for (int i = 0; i < matrixSize; ++i)
	{
		for (int j = 0; j < matrixSize; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
