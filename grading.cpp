#include<iostream>
using namespace std;

void initialisation()
{
    cout<<"\nEnter the mark of the student: \n";
    int mark;
    cin>>mark;
    if(mark < 0 || mark > 100) {
        cout<<"Invalid mark entered. Please enter a mark between 0 and 100.\n";
        initialisation(); 
    }
}

int main()
{
    cout<<"Starting the grading program\n";
    initialisation();
    cout<<"\nGrading program completed successfully\n";
}