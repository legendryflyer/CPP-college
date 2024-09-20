#include <iostream>
#include <iomanip>  
#include <string>   

using namespace std;

int main() {
    
    string name = "Name of Subject";
    string marksObt = "Marks Obtained";
    string marksTotal = "Total Marks";

    string subject1 = "Maths";
    int marks1 = 85;
    int totalMarks1 = 100;

    string subject2 = "Physics";
    int marks2 = 75;
    int totalMarks2 = 100;

    string subject3 = "Chemistry";
    int marks3 = 80;
    int totalMarks3 = 100;

    string total = "Total";
    int totalMarks = totalMarks1 + totalMarks2 + totalMarks3;
    int totalMarksObtained = marks1 + marks2 + marks3;

    string percentage = "Percentage";
    float percent = static_cast<float>(totalMarksObtained) / totalMarks * 100;

   
    cout << left << setw(3) << "SN" << "|"
         << setw(20) << name << "|"
         << setw(15) << marksObt << "|"
         << setw(15) << marksTotal << "|" << endl;

    cout << left << setw(3) << 1 << "|"
         << setw(20) << subject1 << "|"
         << setw(15) << marks1 << "|"
         << setw(15) << totalMarks1 << "|" << endl;

    cout << left << setw(3) << 2 << "|"
         << setw(20) << subject2 << "|"
         << setw(15) << marks2 << "|"
         << setw(15) << totalMarks2 << "|" << endl;

    cout << left << setw(3) << 3 << "|"
         << setw(20) << subject3 << "|"
         << setw(15) << marks3 << "|"
         << setw(15) << totalMarks3 << "|" << endl;

    cout <<"__________________________________________________________"<<endl;
    cout << left << setw(3) << "" << "|"
         << setw(20) << total << "|"
         << setw(15) << totalMarksObtained << "|"
         << setw(15) << totalMarks << "|" << endl;

   
    cout <<"__________________________________________________________"<<endl;
    cout << left << setw(3) << "" << "|"
         << setw(20) << percentage << "|"
         << setw(15) << fixed << setprecision(2) << percent << "%" << "|"
         << setw(15) << "" << "|" << endl;

    return 0;
}