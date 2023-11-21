
//RIMSHA IRFAN
//L1F22BSCS0466
#include"Mychar.h"
#include<iostream>


MyChar::MyChar(char ch) : MyChar(ch) {}

void MyChar::setvariable(char a)
{
	variable = a;
}

char MyChar::getvaribale()
{
	return variable;
}

char MyChar::conversionTOsmall()
{

	variable = variable + 32;
	cout << "small letter is:" << endl;
	return variable;
}
char MyChar::conversionTOcapital() {

	cout << "YOU ENTERED SMALL LETTER!!" << endl;

	variable = variable - 32;
	cout << "capital letter is:" << endl;
	return variable;

}

void MyChar::selection()
{
	if (variable >= 'A' && variable <= 'Z')
	{
		cout << conversionTOsmall() << endl;
	}

	else if (variable >= 'a' && variable <= 'z')
	{
		cout << conversionTOcapital() << endl;
	}
}