#include <iostream>
using namespace std;

class item {
    int p,q;
public:
    void getData(int a, int b);
};
void item::getData(int a, int b) {
    p = a;
    q = b;
    if(a>b){
        cout<<"greater : "<<a <<endl;
    }
    else{
        cout<<"greater : "<<b<<endl;
    }
}
int main() {
    item a;
    int x;
    float y;
    cout<<"enter the first number"<<endl;
    cin>>x;
    cout<<"second "<<endl;
    cin>>y;
    a.getData(x,y);
    return 0; 
}