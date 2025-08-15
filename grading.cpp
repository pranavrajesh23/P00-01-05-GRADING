#include<iostream>
using namespace std;


// Function to calculate the grade based on the mark scored
string calculateGradeFunc(int markScored)
{
    if(markScored >= 80) {
        return "A";
    } else if(markScored >= 60) {
        return "B";
    } else if(markScored >= 50) {
        return "C";
    } else {
        return "FAIL";
    }
}


// Function to display the grade based on the mark entered
void displayGrade(int mark)
{
    string grade = calculateGradeFunc(mark);
    cout<<"\nThe grade has been calculated successfully.\n";
    cout<<"\nThe grade for the mark "<<mark<<" is: "<<grade<<"\n";
}

// Function to handle the initialisation and input of marks
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

// Main function to start the grading program
int main()
{
    cout<<"Starting the grading program\n";
    initialisation();
    cout<<"\nGrading program completed successfully\n";
}