#include "Roster.h"
	
void Roster::parse(string row)
{
	string rowToParse = row;
	int right = rowToParse.find(","); //find first comma
	string studentID = rowToParse.substr(0, right); //extract substring up to comma
	
	int left = right + 1; //step past previous comma
	right = rowToParse.find(",", left);
	string firstName = rowToParse.substr(left, right - left); //extracts first name

	left = right + 1;
	right = rowToParse.find(",", left);
	string lastName = rowToParse.substr(left, right - left);

	left = right + 1;
	right = rowToParse.find(",", left);
	string emailAddr = rowToParse.substr(left, right - left);

	left = right + 1;
	right = rowToParse.find(",", left);
	int age = stoi(rowToParse.substr(left, right - left));

	left = right + 1;
	right = rowToParse.find(",", left);
	int days_1 = stoi(rowToParse.substr(left, right - left));

	left = right + 1;
	right = rowToParse.find(",", left);
	int days_2 = stoi(rowToParse.substr(left, right - left));

	left = right + 1;
	right = rowToParse.find(",", left);
	int days_3 = stoi(rowToParse.substr(left, right - left));

	left = right + 1;
	right = rowToParse.find(",", left);
	string degree = rowToParse.substr(left, right - left); // extract degree type to string 
	DegreeProgram degreeProgram;

	/*determine degree type and assign enum value*/
	if (degree == "NETWORK") degreeProgram = NETWORK;
	else if (degree == "SECURITY") degreeProgram = SECURITY;
	else if (degree == "SOFTWARE") degreeProgram = SOFTWARE;

	add(studentID, firstName, lastName, emailAddr, age, days_1, days_2, days_3, degreeProgram);

}

void Roster::add(string studentID, string firstName, string lastName, string emailAddr, int age, int days_1, int days_2, int days_3, DegreeProgram degree)
{
	int daysToComplete[3] = { days_1, days_2, days_3 }; 
	classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddr, age, daysToComplete, degree);
}

void Roster::remove(string studentID)
{	
	bool found = false;
	for (int i = 0; i < numberOfStudents; i++) {
		if (classRosterArray[i] !=NULL && classRosterArray[i]->getID() == studentID)
		{
			found = true;
			while (i < (numberOfStudents - 1)) {
				classRosterArray[i] = classRosterArray[i+1];
				i++;
			}
			classRosterArray[i] = NULL;
		}
	}
	if (found == false) cout << "Error: Student ID Not Found\n";
}

void Roster::printAll()
{
	for (int i = 0; i < numberOfStudents; i++) {
		if (classRosterArray[i] != NULL) 
		{
			classRosterArray[i]->print();
		}
	}

}

//finds the student and averages the number of days for that student. then prints
void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < numberOfStudents; i++) {
		if (classRosterArray[i]->getID() == studentID) {
			int sum = 0;
			for (int j = 0; j < 3; j++) { 
				sum += classRosterArray[i]->getDays()[j];				
			}
			cout << sum/3 << "\n";
			break; //stop iterating through the array since ID has been found and summed
		}
	}
}

void Roster::printInvalidEmails()
{
	cout << "Invalid Email Addresses:\n";
	for (int i = 0; i < numberOfStudents; i++) {
		string emailAddr = classRosterArray[i]->getEmailAddr();
		if (emailAddr.find(" ") != string::npos || emailAddr.find("@") == string::npos || emailAddr.find(".") == string::npos)
		{
			cout << emailAddr << "\n";
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degree)
{
	for (int i = 0; i < numberOfStudents; i++) {
		if (classRosterArray[i]->getDegreeProgram() == degree)
		{
			classRosterArray[i]->print();
		}
	}
}

Roster::~Roster()
{
	cout << "Destructing";
	for (int i = 0; i < numberOfStudents; i++)
	{
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}
