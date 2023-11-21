

//RIMSHA IRFAN
//L1F22BSCS0466
#include "Name.h"
#include "Function.h"


Name::Name(const char* first, const char* last)
{
	setFirstName(first);
	setLastName(last);
}
Name::Name(const Name& other)
{
	setFirstName(other.firstName);
	setLastName(other.lastName);
}
Name::~Name()
{
	delete[] firstName;
	delete[] lastName;
}
void Name::setFirstName(const char* first)
{
	if (first == nullptr)
	{
		return;
	}
	else
	{
		int size = strlen(first);

		firstName = new char[size + 1];

		for (int i = 0; i < size; i++)
		{
			firstName[i] = first[i];
		}

		firstName[size] = '\0';
	}

}
void Name::setLastName(const char* last)
{
	if (last == nullptr)
	{
		return;
	}
	int size = 6;

	lastName = new char[size + 1];

	for (int i = 0; i < size; i++)
		lastName[i] = last[i];

	lastName[size] = '\0';

}
char* Name::getFirstName()
{
	return firstName;
}
char* Name::getLastName()
{
	return lastName;
}
void Name::copyName(Name& other)
{
	other.setFirstName(getFirstName());
	other.setLastName(getLastName());
}
void Name::camelCase()
{
	if (firstName[0] >= 'a' && firstName[0] <= 'z')
	{
		firstName[0] -= ('a' - 'A');
	}

	if (lastName[0] >= 'a' && lastName[0] <= 'z')
	{
		lastName[0] -= ('a' - 'A');
	}

	
	for (int i = 1; firstName[i] != '\0'; i++)
	{
		if (firstName[i] >= 'A' && firstName[i] <= 'Z')
		{
			firstName[i] += ('a' - 'A');
		}
	}

	for (int i = 1; lastName[i] != '\0'; i++)
	{
		if (lastName[i] >= 'A' && lastName[i] <= 'Z')
		{
			lastName[i] += ('a' - 'A');
		}
	}
}

void Name::toLower()
{
	int size1 = strlen(firstName);
	int size2 = strlen(lastName);

	for (int i = 0; i < size1; i++)
	{
		if (firstName[i] >= 'A' && firstName[i] <= 'Z')
		{
			firstName[i] += ('a' - 'A');
		}
	}

	for (int i = 0; i < size2; i++)
	{
		if (lastName[i] >= 'A' && lastName[i] <= 'Z')
		{
			lastName[i] += ('a' - 'A');
		}
	}

}
void Name::toUpper()
{
	int size1 = strlen(firstName);
	int size2 = strlen(lastName);

	for (int i = 0; i < size1; i++)
	{
		if (firstName[i] > 96 && firstName[i] < 123)
		{
			firstName[i] -= 32;
		}
	}
	for (int i = 0; i < size2; i++)
	{
		if (lastName[i] > 96 && lastName[i] < 123)
		{
			lastName[i] -= 32;
		}
	}
}
int Name::nameLength()
{
	int size = strlen(firstName);
	size = size + strlen(lastName);

	return size;
}
void Name::swapNames()
{
	char* temp = nullptr;
	mystrcopy(firstName, temp);
	mystrcopy(lastName, firstName);
	mystrcopy(temp, lastName);

	delete[]temp;
}
void Name::display()
{
	cout << firstName << " " << lastName << endl;
}
char* Name::fullName()
{
	int size = nameLength() + 2;
	char* name = new char[size];

	int size1 = strlen(firstName);
	int size2 = strlen(lastName);

	for (int i = 0; i < size1; i++)
		name[i] = firstName[i];

	name[size1] = ' ';

	for (int i = 0; i < size2; i++)
		name[size1 + 1 + i] = lastName[i];

	name[size - 1] = '\0';

	return name;
}
bool Name::isValidName()
{
	char* name = fullName();

	int size = strlen(name);

	bool isValid = true;

	for (int i = 0; i < size; i++)
	{
		if (!((name[i] > 96 && name[i] < 123) || (name[i] > 64 && name[i] < 91) || name[i] == ' '))
		{
			isValid = false;
		}
	}

	return isValid;
}
