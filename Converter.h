#pragma once
#include "Matrix.h"

class Converter
{
public:
	static Matrix intToMatrix(unsigned int value, vector<int> modules);
	static int matrixToInt(Matrix value, vector<int> modules);
};

