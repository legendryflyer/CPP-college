#include<iostream>
using namespace std;

void swap(int, int );

int main(){
    int a,b;

    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    // after swaping

    swap(a,b);


    return 0;
}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}

// #include<iostream>
// using namespace std;

// inline void swap(int a, int b);

// int main(){
//     int a,b;

//     cout<<"enter two numbers"<<endl;
//     cin>>a>>b;

//     // after swaping

//     swap(a,b);


//     return 0;
// }

// inline void swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"after swapping"<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }

