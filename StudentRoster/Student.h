#pragma once
#include "degree.h"
#include <iostream>
using std::cout;
using std::string;


class Student
{
public:
	const static int daysArraySize = 3;
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddr;
	int age;
	int daysToComplete[daysArraySize];
	DegreeProgram degreeProgram;
public:
	Student(); /*parameterless constructor to set default values*/
	Student(string studentID, string firstName, string lastName, string emailAddr, int age, int daysToComplete[], DegreeProgram degreeProgram); /*Full constructor*/
	~Student();/*destructor*/;

	/*getters*/
	string getID();
	string getFirstName();
	string getLastName();
	string getEmailAddr();
	int getAge();
	int* getDays();
	DegreeProgram getDegreeProgram();

	/*setters*/
	void setID(string ID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddr(string emailAddr);
	void setAge(int age);
	void setDays(int daysToComplete[]);
	void setDegreeProgram(DegreeProgram degree);

	void print(); /*displays this students data*/





};

