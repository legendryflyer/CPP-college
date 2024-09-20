#include<iostream>
using namespace std;

class sem5 {

    private:    
        string lastName="anade";
        int regNO=21070208;
        string email="tavishanade12@gmail.com";

    public:
        int rollno=170;
        string firstName="tavish";

        displayLastname(){
            cout<<"last name is "<<lastName<<endl;
        };
        displayRegNO(){
            cout<<"reg number is "<<regNO<<endl;
        };
        displayEmail(){
            cout<<"email is "<<email<<endl;                                      
        };



};

int main(){

    sem5 student;
    cout << student.rollno << endl;
    cout << student.firstName << endl;
    cout<<student.displayLastname() << endl;
    cout<<student.displayRegNO() << endl;
    cout<<student.displayEmail() << endl;
    
    return 0;
}