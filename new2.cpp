#include<iostream>
using namespace std;

class student{
    private:
        string name;
    public:
        void input();
        void output();
};

void student::input(void){
    cout<<"Enter your name: ";
    cin>>name;
}
void student::output(void){
    cout<<"Your name is: "<<name<<endl;
}

int main(){
    student s1,s2,s3;
    s1.input();
    s1.output();
    s2.input();
    s2.output();
    s3.input();
    s3.output();
    

    return 0;
}