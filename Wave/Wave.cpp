#include <iostream>
#include "windows.h"
#include "Header.h"

using namespace std;
int main()
{
    string Message = "^";
    for (int j = 0; j < 8; j++)
    {
        //нисходящая 
        for (int a = 10; a > 1; a--)
        {
            string NegMultipleSpace(10 - a, ' ');
            string MultipleSpace(a, ' ');
            cout << ("." + MultipleSpace + Message + NegMultipleSpace + NegMultipleSpace + Message) << endl;
            Sleep(40);
        }
        //восходящая
        for (int b = 1; b < 10; b++)
        {
            string NegMultipleSpace(10 - b, ' ');
            string MultipleSpace(b, ' ');
            cout << ("." + MultipleSpace + Message + NegMultipleSpace + NegMultipleSpace + Message) << endl;
            Sleep(40);
        }
    }
    return 0;
}