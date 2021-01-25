#include "student.h"


Student::Student() //default constructor to set values to default
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddr = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->daysToComplete[i] = 0;
	this->degreeProgram = DegreeProgram::SECURITY;

}

//Constructor
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
//Getters or Accessors
string Student::getID() {return this->studentID;}
string Student::getFirstName() {return this->firstName;}
string Student::getLastName() {return this->lastName;}
string Student::getEmailAddr() {return this->emailAddr;}
int Student::getAge() {return this->age;}
int* Student::getDays() { return this->daysToComplete;}
DegreeProgram Student::getDegreeProgram() {	return DegreeProgram();}


//Setters or Mutators
void Student::setID(string ID)
{
	this->studentID = ID;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setEmailAddr(string emailAddr)
{
	this->emailAddr = emailAddr;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setDays(int daysToComplete[])
{

}

void Student::setDegreeProgram(DegreeProgram degree)
{
	this->degreeProgram = degree;
}

//Prints this Students info 
void Student::print()
{
	cout << studentID << "\t";
	cout << "First Name: " << firstName << "\t";
	cout << "Last Name: " + lastName + "\t";
	cout << "Age: " << age << "\t";
	cout << "daysInCourse: " << "{";
	for (int i = 0; i < daysArraySize - 1; i++)
	{
		
		
		cout << daysToComplete[i] << ", ";
	}
	cout << daysToComplete[daysArraySize - 1] << "} ";
	cout << "Degree Program: " << degreeTypeStrings[degreeProgram];


}
