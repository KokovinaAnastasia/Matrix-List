#include "pch.h"
#include "Matrix3x3.h"
#include <cstdlib>

using namespace std;

constexpr int m_size = 3;

Matrix3x3::Matrix3x3()
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			matrix[i][j] = 0;
}

int Matrix3x3::element(const int i, const int j) const
{
	return matrix[i][j];
};

void Matrix3x3::setElement(const int i, const int j, const int value)
{
	matrix[i][j] = value;
};

void Matrix3x3::fillRandomElements(const int minVal, const int maxVal)
{
	for (int i = 0; i < m_size; i++)
		for (int j = 0; j < m_size; j++)
			setElement(i, j, (rand() % (maxVal - minVal)) + minVal);
};

int  Matrix3x3::sumPrincipalDiag() const
{
	int sum = 0;
	for (int i = 0; i < m_size; i++)
		sum += element(i, i);
	return sum;
};

int Matrix3x3::sumSecondaryDiag() const
{
	int sum = 0;
	for (int i = 0; i < m_size; i++)
		sum += element(m_size - i - 1, i);
	return sum;
};

int Matrix3x3::productPrinsipalDiag() const
{
	int prod = 1;
	for (int i = 0; i < m_size; i++)
		prod *= element(i, i);
	return prod;
};

int Matrix3x3::productSecondaryDiag() const
{
	int prod = 1;
	for (int i = 0; i < m_size; i++)
		prod *= element(m_size - i - 1, i);
	return prod;
};
int  Matrix3x3::sumRow(const int iRow) const
{
	int sum = 0;
	for (int i = 0; i < m_size; i++)
		sum += element(iRow, i);
	return sum;
};

int Matrix3x3::minColumn(const int iCol) const
{
	int min = element(0, iCol);
	for (int i = 1; i < m_size; i++)
	{
		if (element(i, iCol) < min) min = element(i, iCol);
	}
	return min;
};

int Matrix3x3::maxColumn(const int iCol) const
{
	int max = element(0, iCol);
	for (int i = 1; i < m_size; i++)
	{
		if (element(i, iCol) > max) max = element(i, iCol);
	}
	return max;
};
