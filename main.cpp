#include"Simplex.h"

int main()
{
	setlocale(LC_ALL, "russian");
    char input;
	double c[3] = { 8, 6, 2 };
	double A[3][3] = { 2, 1, 1, 1, 4, 0, 0, 0.5, 1 };
	double b[3] = { 4, 3, 6 };

	
		Simplex *a = new Simplex(c, A, b);
		a->start();
		delete a;

	return 0;
}
