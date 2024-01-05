/************************************
 * Автор: Станковский П.А.          *
 * Дата: 05.01.2024                 *
 * Shitcode Lab10 v1                *
 * https://onlinegdb.com/8lb47eliFM *
 ************************************/
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>

using namespace std;
using namespace boost::multiprecision;

int main() {
    string arithmeticOperator = "0";
    cpp_int firstNum;
    cpp_int secondNum;
    
    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter operator (+, -, / or :, *): ";
    cin >> arithmeticOperator;
    cout << "Enter second number: ";
    cin >> secondNum;
    
    if (arithmeticOperator == "+") {
        cout << "Result: " << (firstNum + secondNum);
    } else if (arithmeticOperator == "-") {
        cout << "Result: " << (firstNum - secondNum);
    } else if (arithmeticOperator == "/" or arithmeticOperator == ":") {
        cout << "Result: " << (firstNum / secondNum);
    } else if (arithmeticOperator == "*") {
        cout << "Result: " << (firstNum * secondNum);
    } else {
        cout << "Sorry, your operator is wrong! Please, repeat your procedure.";
    }
    
    return 0;
}
