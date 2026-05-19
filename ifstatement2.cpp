#include <iostream>
using namespace std;
int GetMax ( int num1 , int num2 ) {
    int Result;
    if (num1 > num2) {
        Result = num1; }
        else {
            Result = num2;
        }

            return Result;
    }
    int main() 
    {
        cout << GetMax (105,176);
        return 0;
    }
    