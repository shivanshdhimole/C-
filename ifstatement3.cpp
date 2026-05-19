#include <iostream>
using namespace std;
int GetMax ( int num1 , int num2 , int num3 ){
    int Result ;
    if(num1 >= num2 && num1 >= num3 ){
        Result = num1;}
        else if (num2 >= num1 && num2 >= num3){
            Result = num2; }
            else {
                Result = num3;

            }
            return Result; 
    }
    int main () {
    cout << GetMax (100,99,99);
    return 0;
    }