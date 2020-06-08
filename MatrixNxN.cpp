#include "pch.h"
#include "MatrixNxN.h"
#include <cstdlib>

using namespace std;

MatrixNxN::MatrixNxN(const int iDim)
{
	arr = new int*[iDim];
	for (int i = 0; i < iDim; i++)
		arr[i] = new int[iDim];
	size = iDim;
}

int MatrixNxN::element(const int i, const int j) const
{
	return arr[i][j];
};

void MatrixNxN::setElement(const int i, const int j, const int value)
{
	arr[i][j] = value;
};

void MatrixNxN::fillRandomElements(const int minVal, const int maxVal)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			setElement(i, j, (rand() % (maxVal - minVal)) + minVal);
};

int  MatrixNxN::sumPrincipalDiag() const
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += element(i, i);
	return sum;
};

int MatrixNxN::sumSecondaryDiag() const
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += element(size - i - 1, i);
	return sum;
};

int MatrixNxN::productPrinsipalDiag() const
{
	int prod = 1;
	for (int i = 0; i < size; i++)
		prod *= element(i, i);
	return prod;
};

int MatrixNxN::productSecondaryDiag() const
{
	int prod = 1;
	for (int i = 0; i < size; i++)
		prod *= element(size - i - 1, i);
	return prod;
};
int  MatrixNxN::sumRow(const int iRow) const
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += element(iRow, i);
	return sum;
};

int MatrixNxN::minColumn(const int iCol) const
{
	int min = element(0, iCol);
	for (int i = 1; i < size; i++)
	{
		if (element(i, iCol) < min) min = element(i, iCol);
	}
	return min;
};

int MatrixNxN::maxColumn(const int iCol) const
{
	int max = element(0, iCol);
	for (int i = 1; i < size; i++)
	{
		if (element(i, iCol) > max) max = element(i, iCol);
	}
	return max;
};

void MatrixNxN::deleteArray()
{
	for (int i = 0; i < size; i++)
		delete[] arr[i];
	delete[] arr;
}
