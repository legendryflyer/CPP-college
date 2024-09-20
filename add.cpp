#include<iostream>
using namespace std;
void add(int,int);
void add(float,float);
int main(){
    int a=1,b=2;
    float c=1.1,d=1.1;
    // cout<<"Enter the first number: ";
    
    
    // cout<<"enter the second number: ";
    
    

    add(a,b);
    add(c,d);
    
    return 0;
}

void add(int a,int b){
    int sum = a + b;
    cout<<"addition="<<sum<<endl;
}

void add(float c,float d){
    float sum = c+d;
    cout<<"addition"<<sum<<endl;
}