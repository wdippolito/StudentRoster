#include "Roster.h"


//Roster::Roster()
//{
//
//}


void Roster::parse(string row)
{
	string rowToParse = row;
	int rhs = rowToParse.find(","); //find first comma
	string studentID = rowToParse.substr(0, rhs); //extract substring up to comma
	
	int lhs = rhs + 1; //step past previous comma
	rhs = rowToParse.find(",", lhs);
	string firstName = rowToParse.substr(lhs, rhs - lhs); //extracts first name

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	string lastName = rowToParse.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	string emailAddr = rowToParse.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	int age = stoi(rowToParse.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	int days_1 = stoi(rowToParse.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	int days_2 = stoi(rowToParse.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	int days_3 = stoi(rowToParse.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = rowToParse.find(",", lhs);
	string degree = rowToParse.substr(lhs, rhs - lhs); // extract degree type to string 
	DegreeProgram degreeProgram;

	/*determine degree type and assign enum value*/
	if (degree == "NETWORK") degreeProgram = NETWORK;
	else if (degree == "SECURITY") degreeProgram = SECURITY;
	else if (degree == "SOFTWARE") degreeProgram = SOFTWARE;

	cout << studentID << firstName << lastName << age << days_1 << days_2 << days_3 << degreeTypeStrings[degreeProgram];
	add(studentID, firstName, lastName, emailAddr, age, days_1, days_2, days_3, degreeProgram);
	
		






}

void Roster::add(string studentID, string firstName, string lastName, string emailAddr, int age, int days_1, int days_2, int days_3, DegreeProgram degree)
{
	int daysToComplete[3]; //how do i get this variable?
	Student student;
	student.setID(studentID);
	student.setFirstName(firstName);
	student.setLastName(lastName);
	student.setEmailAddr(emailAddr);
	student.setAge(age);
	student.setDays(daysToComplete);
	void setDegreeProgram(DegreeProgram degree);

}

void Roster::remove(string studentID)
{
}

void Roster::printAll()
{
}

void Roster::printAverageDaysInCourse(string studentID)
{

}

void Roster::printInvalidEmails()
{
}

void Roster::printByDegreeProgram(DegreeProgram degree)
{
}
