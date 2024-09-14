#pragma once
#include "Matrix.h"
class RNSOperations
{
public:
	static Matrix addition(Matrix A, Matrix B, vector<int> modules);
	static Matrix mutiplication(Matrix A, Matrix B, vector<int> modules);
};

