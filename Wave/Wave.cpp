#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    string Message = "^";
    for (int j = 0; j < 8; j++)
    {
        //нисходящая 
        for (int a = 10; a > 1; a--)
        {
            string NegMultipleSpace (10 - a, ' ');
            string MultipleSpace (a, ' ');
            cout << ("." + MultipleSpace + Message + NegMultipleSpace + NegMultipleSpace + Message) << endl;
            Sleep(40);
        }
        return 0;
    }
}
