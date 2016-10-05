#pragma once

#include<iostream>
#include<string>

class Simplex
{
public:
	const static int row = 4, col = 4;
private:
	double Matrix[row][col];
	std::string upstring[col];
	std::string leftstring[row];
	int first_column_doing_something_you_know();
	int last_row_doing_something_you_know();
	int search_good_row_to_swap_you_know(int k);
	int search_good_column_to_swap_you_know(int r);
	int swap(int r, int k);
public:
	Simplex(double c[3], double A[3][3], double b[3]);
	~Simplex();
	int print();
	int start();

};

