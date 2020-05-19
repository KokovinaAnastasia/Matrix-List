#include "pch.h"
#include <iostream>
#include "Matrix3x3.h"

using namespace std;

int main()
{
	Matrix3x3 matr = Matrix3x3::Matrix3x3();
	matr.fillRandomElements(-10, 10);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << matr.element(i, j) << "\t";
		cout << endl;
	}
	cout << endl;
	cout << "SumPrincipalDiagonal = " << matr.sumPrincipalDiag() << endl;
	cout << "SumSideDiagonal = " << matr.sumSecondaryDiag() << endl ;
	cout << "ProdPrincipalDiagonal = " << matr.productPrinsipalDiag() << endl;
	cout << "ProdSideDiagonal = " << matr.productSecondaryDiag() << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "SumRow" << i + 1 << "= " << matr.sumRow(i) << endl;
		cout << "MaxInColumn" << i + 1 << " = " << matr.maxColumn(i) << endl;
		cout << "MinInColumn" << i + 1 << " = " << matr.minColumn(i) << endl << endl;
	}
	system("pause");
	return 0;
}
