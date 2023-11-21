//RIMSHA IRFAN
//L1F22BSCS0466

#include "MyNum.h"


MyNum::MyNum(int a) : variable(a) {}

void MyNum::setVariable(int a) {
    variable = a;
}

int MyNum::getVariable() {
    return variable;
}


void MyNum::conversionTOpositive() {

    cout << endl;

    if (variable < 0) {
        cout << "ORIGINAL NUMBER:" << endl;
        cout << variable << endl;
        cout << "CONVERTING INTO POSITIVE NUMBER:" << endl;
        variable = variable * (-1);
        cout << variable << endl;
    }
}
void MyNum::conversionTOnegative()
{
    if (variable > 0) {
        cout << "ORIGINAL NUMBER:" << endl;
        cout << variable << endl;
        cout << "CONVERTING INTO NEGATIVE NUMBER:" << endl;
        variable = variable * (-1);
        cout << variable << endl;
    }



}



