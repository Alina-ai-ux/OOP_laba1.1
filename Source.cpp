// Money.cpp
// головний файл проекту – функція main
#include <iostream>
#include "Money.h"
using namespace std;
int main()
{
	Money money1;
	money1.SetPar(2);
	money1.SetNumberofbills(5);
	cout << "suma1="<< money1.summa()<< endl;

	Money money2;
	int x, y;
	cout << "Par?";
	cin >> x;
	cout << "Numberofbills?";
	cin >> y;
	money2.SetPar(x);
	money2.SetNumberofbills(y);
	cout << "suma2=" << money2.summa();
	return 0;
}