#include <iostream>
using namespace std;

class Calculator { // 계산기 클래스 정의
    public:
    double a, b;

    void add() { // 덧셈 함수
        cout << "The sum is: " << a+b << endl;
    }
    void subtract() { // 뺄셈 함수
        cout << "The Substraction is: " << a-b << endl;
    }
    void multiply() { // 곱셈 함수
        cout << "The Multiplication is: " << a*b << endl;
    }
    void divide() { // 나눗셈 함수
        cout << "The Division is: " << a/b << endl;
    }
};

Calculator calc; // Calculator 클래스의 인스턴스 생성

int main() {
    int choice;

    while(true)
    {

    cout << "Enter the two numbers: " << endl;
    cin >> calc.a >> calc.b;
    cout << "Enter the Add 1, Subtract 2, Multiply 3, Divide 4 and.. want quit '5'" << endl;
    cin >> choice;


    if (choice == 1) { // 덧셈 선택
        calc.add();
    }
    else if (choice == 2) { // 뺄셈 선택
        calc.subtract();
    }
    else if (choice == 3) { // 곱셈 선택
        calc.multiply();
    }
    else if (choice == 4) { // 나눗셈 선택
        calc.divide();
    }
    else if (choice == 5){ // 종료 선택
        cout << "Exiting the calculator." << endl;
        break; // 프로그램 종료
    }
    }
    return 0;
    
}