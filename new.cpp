// enterthe name of student and marks of 3 subjects and calculate avg


#include<iostream>
using namespace std;


class Student{
    public:
        string lastname;
        int m1;
        int m2;
        int m3;
    
    void displayMarksheet(){
        cout<<"name of student: ";
        cin>>lastname;
        cout<<"marks of physics: ";
        cin>>m1;
        cout<<"marks of chemistry: ";
        cin>>m2;
        cout<<"marks of maths: ";
        cin>>m3;

        float average = (m1+m2+m3)/3;

              
       
        cout << "Name: " << lastname << endl;
        cout << "Marks in Subject 1: " << m1 << endl;
        cout << "Marks in Subject 2: " << m2 << endl;
        cout << "Marks in Subject 3: " << m3 << endl;
        cout << "Average Marks: " << average << endl;
    }
};
int main{
    
    Student tavish;
    tavish.displayMarksheet();
    return 0;

}

tavish.displayMarksheet()
{
    return tavish.();
}
