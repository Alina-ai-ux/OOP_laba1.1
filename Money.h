// Money.h
// ���������� ���� � ���������� �����
#pragma once
class Money
{
private:
	int par;
	int numberofbills;
public:
	int summa() const;
	void SetPar(int value);
	void SetNumberofbills(int value) { numberofbills = value; }
};
