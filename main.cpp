//RIMSHA IRFAN
//L1F22BSCS0466

#include"Name.h"

int namecompare(Name name1, Name name2);
int comparestring(char* S1, char* S2);

int main()
{
	Name n1;

	n1.setFirstName("RIMSHA");
	n1.setLastName("IRFAN");

	n1.display();

	Name n2(n1);

	n2.camelCase();
	cout << "NAME IN CAMEL CASE" << endl;
	n2.display();

	n2.toLower();
	cout << "NAME IN LOWER CASE" << endl;
	n2.display();

	n2.toUpper();
	cout << "NAME IN UPPER CASE" << endl;
	n2.display();

	cout << "THE LENGTH OF THE NAME: " << endl;
	cout << n2.nameLength() << endl;

	Name n3("laiba", "faryal");

	n3.copyName(n2);

	cout << " COPIED NAME IS:" << endl;
	n2.display();

	n2.swapNames();
	cout << "SWAPED NAMES!!! " << endl;
	n2.display();

	char ptr[50];

	cout << "ENTER YOU FIRST NAME" << endl;
	cin >> ptr;
	n1.setFirstName(ptr);

	cout << "ENTER YOUR LAST NAME " << endl;
	cin >> ptr;
	n1.setLastName(ptr);

	while (true)
	{
		cout << "_________________________________________________" << endl;
		cout << "ENTER FIRST NAME" << endl;
		cin >> ptr;
		n1.setFirstName(ptr);

		cout << "ENTER SECOND NAME" << endl;
		cin >> ptr;
		n1.setLastName(ptr);

		if (n1.isValidName())
		{
			break;
		}
		else
		{
			cout << "INVALID!!" << endl;
			cout << "ENTER AGAIN" << endl;
		}
	}

	cout << "VALID NAME!!" << endl;

	cout << "ENTER ANOTHER NAME" << endl;
	cout << "ENTER YOUR FIRST NAME" << endl;
	cin >> ptr;
	n2.setFirstName(ptr);

	cout << "ENTER YOUR LAST NAME " << endl;
	cin >> ptr;
	n2.setLastName(ptr);

	while (true)
	{
		cout << "_________________________________________________" << endl;
		cout << "ENTER FIRST NAME" << endl;
		cin >> ptr;
		n2.setFirstName(ptr);

		cout << "ENTER SECOND NAME" << endl;
		cin >> ptr;
		n2.setLastName(ptr);

		if (n2.isValidName())
		{
			break;
		}
		else
		{
			cout << "INVALID!!" << endl;
			cout << "ENTER AGAIN" << endl;
		}
	}
	cout << "VALID NAME!!" << endl;

	if (namecompare(n1, n2) == 0)
		cout << "IDENTICAL" << endl;
	else if (namecompare(n1, n2) != 0)
	{
		cout << "NOT IDENTICAL!!" << endl;
		cout << "VALUE" << endl;
		cout << namecompare(n1, n2);
	}


	return 0;
}


int namecompare(Name n1, Name n2)
{
	int lastNameComparison = comparestring(n1.getLastName(), n2.getLastName());
	if (lastNameComparison == 0)
	{
		int firstNameComparison = comparestring(n1.getFirstName(), n2.getFirstName());
		return firstNameComparison;
	}
	else
	{
		return lastNameComparison;
	}
}

int comparestring(char* s1, char* s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}


	return (*s1 - *s2);
}
