#include<iostream>
using namespace std;
void area(int,int);
inline void area(int);

int main(){
    int l,b,s;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    cout<<"enter the side of squere: ";
    cin>>s;
    area(l,b);
    area(s);

    return 0;
}

void area(int l , int b){
    cout<<"area of RECT = "<<l*b<<endl;
}
inline void area(int s){
    cout<<"area of squere= "<<s*s<<endl;
}