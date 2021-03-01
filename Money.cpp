////////////////////////////////////////////////////////////////////
// Money.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
#include "Money.h"
int Money::summa() const{
	return  par * numberofbills;
}
void Money::SetPar(int value)
{
	//	cin >> value;
	if (value == 1 || value == 2 || value == 5 || value == 10 || value == 20 || value == 50 || value == 100 || value == 200 && value == 500)
		par = value;
	else
		par = 0;
}