#include <iostream>
using namespace std;

class item {
    int number;
    float cost;
public:
    void getData(int a, float b); // Added void return type
    void putData(void);          // Added void return type
};

// Function definitions
void item::getData(int a, float b) {
    number = a;
    cost = b;
}

void item::putData(void) {
    cout << "Number: " << number << endl;
    cout << "Cost: " << cost << endl;
}

int main() {
    item a;
    int x;
    float y;
    cout<<"enter the number"<<endl;
    cin>>x;
    cout<<"enter cost"<<endl;
    cin>>y;
    a.getData(x,y);
    a.putData();
    return 0; // Added return statement
}
