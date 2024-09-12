#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matrix
{
private:
	int matrixSize;
	vector<vector<int>> matrix;
public:
	Matrix(int n);
	static Matrix createRandMatrix(int size, int min, int max);
	static Matrix matrixSummary(Matrix firstMatrix, Matrix secondMatrix);
	static Matrix matrixMultiplication(Matrix firstMatrix, Matrix secondMatrix);
	void setMatrix(Matrix newMatrix);
	void printMatrix();
};