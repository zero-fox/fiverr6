#include <iostream>
#include<fstream>
#include<string>
#include "matrix.h"

using namespace std;
//basic necessesities at the begining of the program
//the main function
int main()
{
//opens the file
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	//while (fin.good())
	//{
		Matrix a = Matrix();
		fin >> a;
		
		
		fout << a;
		/*
		Matrix b = Matrix();
		fin >> b;
		
		Matrix c = Matrix();
		c = a + b; 
		fout << c;
		*/
		
		/*
		//reads the 1st and 2nd matrix 
		int row_1, column_1;
		fin >> row_1 >> column_1;
		int matrix_1[20][20];
		for (int row = 0; row < row_1; row++)
		{
			for (int column = 0; column < column_1; column++)
			{
				fin >> matrix_1[row][column];
			}
		}
		//reads the second matrix 
		int matrix_2[20][20];
		for (int row = 0; row < row_1; row++)
		{
			for (int column = 0; column < column_1; column++)
			{
				fin >> matrix_2[row][column];
			}
		}
		//Adds the first two matrixes together
		int matrix_copy[20][20];
		for (int row = 0; row < row_1; row++)
		{
			for (int column = 0; column<column_1; column++)
			{
				matrix_copy[row][column] = matrix_1[row][column] + matrix_2[row][column];
			}
		}
		//reads the 3rd and 4th matrix in order
		int row_2, column_2;
		fin >> row_2 >> column_2;
		
		//reads the 3rd matrix
		int matrix_3[20][20];
		for (int row = 0; row < row_2; row++)
		{
			for (int column = 0; column < column_2; column++)
			{
				fin >> matrix_3[row][column];
			}
		}
		//reads the 4th matrix
		int matrix_4[20][20];
		for (int row = 0; row < row_2; row++)
		{
			for (int column = 0; column < column_2; column++)
			{
				fin >> matrix_4[row][column];
			}
		}
		//Adds the 3rd and 4th matrixes
		int matrix_copy_2[20][20];
		for (int row = 0; row < row_2; row++)
		{
			for (int column = 0; column < column_2; column++)
			{
				matrix_copy_2[row][column] = matrix_3[row][column] + matrix_4[row][column];
			}
		}
		//Prints to the output file
		fout << row_1 <<
			" " << column_1 << endl;
		for (int row = 0; row < row_1; row++)
		{
			for (int col = 0; col < column_1; col++)
			{
				fout << matrix_copy[row][col] <<
					" ";
			}
			fout << endl;
		}
		fout << endl;
		fout << row_2 <<
			" " << column_2 << endl;
		for (int row = 0; row < row_2; row++)
		{
			for (int col = 0; col < column_2; col++)
			{
				fout << matrix_copy_2[row][col] <<
					" ";
			}
			fout << endl;
		}
		break;
		*/
	//}
	//system("pause");
	cin.get();
	return 0;
}
