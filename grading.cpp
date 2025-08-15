#include<iostream>
using namespace std;

  

void displayGrade(int mark)
{
    string grade = calculateGrade(mark);
    cout<<"\nThe grade has been calculated successfully.\n";
    cout<<"\nThe grade for the mark "<<mark<<" is: "<<grade<<"\n";
}

void initialisation()
{
    cout<<"\nEnter the mark of the student: \n";
    int mark;
    cin>>mark;
    if(mark < 0 || mark > 100) {
        cout<<"\nInvalid mark entered. Please enter a mark between 0 and 100.\n\n";
        initialisation(); 
    }
    else
    {
        displayGrade(mark);
    }
}

int main()
{
    cout<<"Starting the grading program\n";
    initialisation();
    cout<<"\nGrading program completed successfully\n";
}