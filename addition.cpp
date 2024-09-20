#include<iostream>
using namespace std;

class calculator{
    private:
        int num1, num2;

    public:
        calculator(int a, int b){
            num1 = a;
            num2 = b;
        }
        int add(){
            return num1 + num2;
        }
};

int main(){
    int a,b ;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    calculator calc(a, b);
    int sum=calc.add();
    cout<<"Sum is "<<sum<<endl;
}