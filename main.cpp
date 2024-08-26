#include <iostream>
#include <fstream>

using namespace std;

struct Course
{
    string courseName ;
    int creditHours ;
    float grade ;
};

float calculateGPA (Course Courses[], int numCourses )
    {
        float totalpoints  = 0 ;
        int totalcredits   = 0 ;

for (int i = 0 ; i < numCourses ; ++i )
{
    totalpoints += Courses[i].creditHours * Courses[i].grade ;
    totalcredits += Courses[i].creditHours ; 
};

    if (totalcredits==0)
    {
        return 0.0;
    }
    return totalpoints / totalcredits ;

    };


int main ()
{
        cout << "Welcome to the CGPA Calculator!" << endl; 
    
    int numCourses ;
    cout << "Enter The Number Of courses : ";
    cin >> numCourses ;
    
    Course Courses[100];
 

 for (int i = 0 ; i < numCourses ; ++i)
 {
       cout << "Enter The Name Of course : ";
       cin  >> Courses[i].courseName ;
       cout << "Enter The Grade  of " << Courses[i].courseName << " : " ;
       cin  >> Courses[i].grade;
       cout << "Enter The credit Hours Of  " << Courses[i].courseName << " : " ;
       cin  >>  Courses[i].creditHours ;

         while (Courses[i].grade < 0 || Courses[i].grade > 4)
          {
            cout << "Invalid grade! Please enter a grade between 0 and 4: ";
            cin  >>  Courses[i].grade;
          };
 }; 

       float CGPA =  calculateGPA (Courses , numCourses ) ;

     cout << "\n....//The CGPA Report//....\n\n" ;
     cout << "The Num Of Your Courses Is : " << numCourses << "\n" ;
 
     for (int i = 0 ; i < numCourses ; ++i)
     {
        cout << "The Course : " << Courses[i].courseName << " \n" ;
        cout << "The Grade : "  << Courses[i].grade << "\n" ;
        cout << "The Hours : "  << Courses[i].creditHours << "\n" ; 
        cout << "-------------------" << "\n";

     };
      cout << " Your CGPA is: " << CGPA << endl;
      cout << "\nThank you for using the CGPA Calculator!" << endl ; 

     return 0 ;   
};
