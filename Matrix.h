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
	Matrix(vector<int> value);
	static Matrix createRandMatrix(int size, int min, int max);
	static Matrix matrixSummary(Matrix firstMatrix, Matrix secondMatrix);
	static Matrix matrixMultiplication(Matrix firstMatrix, Matrix secondMatrix);
	void setMatrix(Matrix newMatrix);
	vector<vector<int>> getMatrix();
	void printMatrix();
};