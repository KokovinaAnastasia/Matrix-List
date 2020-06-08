#include "pch.h"
#include <iostream>
#include "MatrixNxN.h"

using namespace std;

int main()
{
	MatrixNxN matr = MatrixNxN(4);
	matr.fillRandomElements(-10, 10);

	for (int i = 0; i < matr.size; i++)
	{
		for (int j = 0; j < matr.size; j++)
			cout << matr.element(i, j) << " ";
		cout << endl;
	};
	cout << endl;
	cout << "SumPrincipalDiagonal = " << matr.sumPrincipalDiag() << endl;
	cout << "SumSideDiagonal = " << matr.sumSecondaryDiag() << endl;
	cout << "ProdPrincipalDiagonal = " << matr.productPrinsipalDiag() << endl;
	cout << "ProdSideDiagonal = " << matr.productSecondaryDiag() << endl << endl;
	
	for (int i = 0; i < matr.size; i++)
	{
		cout << "SumRow" << i + 1 << "= " << matr.sumRow(i) << endl;
		cout << "MaxInColumn" << i + 1 << " = " << matr.maxColumn(i) << endl;
		cout << "MinInColumn" << i + 1 << " = " << matr.minColumn(i) << endl << endl;
	}

	matr.deleteArray();

	system("pause");
	return 0;
}