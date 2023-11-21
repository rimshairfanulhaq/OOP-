
//RIMSHA IRFAN
//L1F22BSCS0466
#include "MyNum.h"
#include <iostream>


int main() {

    int temp = 0;
    int m = 0;
    int one;
    MyNum single;
    cout << "ENTER NUMBER FOR SINGLE PRINTING :" << endl;
    cin >> one;
    single.setVariable(one);
    single.getVariable();
    single.conversionTOpositive();
    single.conversionTOnegative();

    int number;
    int N;
    cout << "QUESTION ALERT!!!! " << endl;
    cout << "How many objects do you want to create?" << endl;
    cin >> N;

    MyNum* variableArray = new MyNum[N];
    cout << "______PROCEDURE_____ " << endl;

    for (int i = 0; i < N; i++) {


        cout << "Enter value for object " << i + 1 << endl;
        cin >> number;

        variableArray[i].setVariable(number);
    }

    for (int i = 0; i < N; i++) {

        variableArray[i].getVariable();

    }


    for (int i = 0; i < N; i++) {

        if (variableArray[i].getVariable() > 0)
        {
            variableArray[i].conversionTOnegative();
        }
        else if (variableArray[i].getVariable() < 0)
        {
            variableArray[i].conversionTOpositive();
        }

    }
   
    

    for (int i = 0; i < N; i++)
    {
        if (variableArray[i].getVariable() > variableArray[i + 1].getVariable())
        {
            temp = variableArray[i].getVariable();
            variableArray[i].setVariable(variableArray[i + 1].getVariable());
            variableArray[i + 1].setVariable(temp);


        }
    }

    cout << "SORTED" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << variableArray[i].getVariable()<<endl;
    }


    return 0;
}
