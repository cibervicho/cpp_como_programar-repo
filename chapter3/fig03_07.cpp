// Fig 3.7: fig03_07.cpp
// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Constructor initializes courseName with string supplied as argument
    explicit GradeBook(string name) 
     : courseName(name) // member initializer to initialize courseName
    {
        // empty body
    } // end GradeBook constructor

    // Function that sets the course name
    void setCourseName(string name)
    {
        courseName = name; //Store the course name in the object
    } // End function setCourseName

    // Function that gets the course name
    string getCourseName() const
    {
        return courseName; // Returns the object's courseName
    } // End function getCourseName

    // Display a welcome message to the GradeBook user
    void displayMessage() const
    {
        // Call getCourseName to get the courseName
        cout << "Welcome to the grade book for\n" << getCourseName()
             << "!" << endl;
    } // End function displayMessage
private:
    string courseName; // course name for this GradeBook
}; // End class GradeBook

// Function main begins program execution
int main(void)
{
    // Create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // Display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
         << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
         << endl;
} // end main
