#include "Converter.h"

Matrix Converter::intToMatrix(unsigned int value, vector<int> modules)
{
	vector<int> result;
	for (int i = 0; i < modules.capacity(); i++)
	{
		result.push_back(value % modules[i]);
	}
	return Matrix(result);
}

int Converter::matrixToInt(Matrix value, vector<int> modules)
{
	int result = 0;
	unsigned int P = 1;
	for (int i = 0; i < modules.size(); i++)
	{
		P *= modules[i];
	}
	for (int i = 0; i < modules.size(); i++)
	{
		result += value.getMatrix()[0][i] * (P / modules[i]) * ((P / modules[i]) % modules[i]);
	}
	result = abs(result) % P;
	return result;
}
