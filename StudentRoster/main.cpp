#include <iostream>
#include "roster.h"




int main()
{

    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,William,Dippolito,wdippo1@wgu.edu,27,33,44,55,SOFTWARE"
    };

    const int numStudents = 5;
    
    // Print out to the screen, via your application, the course title, the programming language used, your
    //  WGU student ID, and name
    cout << "\n****************************************************\n";
    cout << "Scripting and Programming - Applications - C867\nC++\n#000579133\nWilliam Dippolito\n";
    cout << "****************************************************\n\n";

    Roster classRoster;

    //Call Parse on each row of the string array to create a student object for each one
    for (string line: studentData)
    {
        classRoster.parse(line);
    }



    classRoster.printAll();
    classRoster.printInvalidEmails();
     
    //loop through classRosterArray and for each element:
   for (int i = 0; i < numStudents; i++) {
        string ID = classRoster.classRosterArray[i]->getID();
        cout << "Average Days: ";
        classRoster.printAverageDaysInCourse(ID);
    }

    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");
}
