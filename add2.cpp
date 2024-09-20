#include <iostream>
using namespace std;


class Calculator {
private:
    int num1;
    int num2;

public:
    
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    
    int addNumbers() {
        return num1 + num2;
    }
};

int main() {
    int a, b;

    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    Calculator calc(a, b);

    
    int sum = calc.addNumbers();

    
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
