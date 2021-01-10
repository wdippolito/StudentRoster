#include "Student.h"


Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddr = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = 0;
	this->degreeProgram = DegreeProgram::SECURITY;

}

Student::Student(string studentID, string firstName, string lastName, string emailAddr, int age, int daysToComplete[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddr = emailAddr;
	this->age = age;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = daysToComplete[i];
	this->degreeProgram = degreeProgram;
}


Student::~Student()
{
}

string Student::getID() {return this->studentID;}
string Student::getFirstName() {return this->firstName;}
string Student::getLastName() {return this->lastName;}
string Student::getEmailAddr() {return this->emailAddr;}
int Student::getAge() {return this->age;}
int* Student::getDays() { return this->daysToComplete;}
DegreeProgram Student::getDegreeProgram() {	return DegreeProgram();}



void Student::setID(string ID)
{
}

void Student::setFirstName(string firstName)
{
}

void Student::setLastName(string lastName)
{
}

void Student::setEmailAddr(string emailAddr)
{
}

void Student::setAge(int age)
{
}

void Student::setDays(int daysToComplete[])
{
}

void Student::setDegreeProgram(DegreeProgram degree)
{
}

void Student::print()
{
}
