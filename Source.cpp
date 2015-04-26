
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "Russian");
	queue< int > ocher;
	ocher.dob(2);
	ocher.dob(4);
	ocher.dob(5);
	ocher.size();
	ocher.get(2);

	system("pause");
	return 0;


}