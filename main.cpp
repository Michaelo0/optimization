#include"Simplex.h"

int main()
{
	setlocale(LC_ALL, "russian");
    char input;
	double c[3] = { 8, 6, 2 };
	double A[3][3] = { 2, 1, 1, 1, 4, 0, 0, 0.5, 1 };
	double b[3] = { 4, 3, 6 };

	do
	{
		Simplex *a = new Simplex(c, A, b);
		a->start();
		delete a;
		std::cout << "Еще раз? (y/n) ";
		std::cin >> input;
		if(input == 'y' || input == 'Y')
		{
			std::cout<<"Введите c:";
			for(int i=0; i<Simplex::row-1; i++)
			{
				std::cin>>c[i];
			}
			std::cout<<"Введите А:";
			for(int i=0; i<Simplex::row-1; i++)
			{
				for(int j=0; j<Simplex::col-1; j++)
				{
					std::cin >> A[i][j];
				}
			}
			std::cout<<"Введите b:";
			for(int i=0; i<Simplex::col-1; i++)
			{
				std::cin>>b[i];
			}
		}
	} while (input == 'y' || input == 'Y');
	return 0;
}
