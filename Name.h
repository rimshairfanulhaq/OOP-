
//RIMSHA IRFAN
//L1F22BSCS0466
#include<iostream>
using namespace std;

class Name
{
private:
	char* firstName;
	char* lastName;
public:
	Name(const char* first = nullptr, const char* last = nullptr);
	Name(const Name&);
	~Name();
	void setFirstName(const char* first);
	void setLastName(const char* last);
	char* getFirstName();
	char* getLastName();
	void copyName(Name&);
	void camelCase();
	void toLower();
	void toUpper();
	int nameLength();
	void swapNames();
	void display();
	char* fullName();
	bool isValidName();

};

