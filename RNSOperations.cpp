#include "RNSOperations.h"

Matrix RNSOperations::addition(Matrix A, Matrix B, vector<int> modules)
{
    vector<int> result;
    for (int i = 0; i < modules.capacity(); i++)
    {
        result.push_back((A.getMatrix()[0][i] + B.getMatrix()[0][i]) % modules[i]);
    }
    return Matrix(result);
}

Matrix RNSOperations::mutiplication(Matrix A, Matrix B, vector<int> modules)
{
    vector<int> result;
    for (int i = 0; i < modules.capacity(); i++)
    {
        result.push_back((A.getMatrix()[0][i] * B.getMatrix()[0][i]) % modules[i]);
    }
    return Matrix(result);
}
