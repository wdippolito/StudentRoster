#pragma once
#include "degree.h"
#include <iostream>
using std::string;
using std::cout;

class student
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
	student(); /*parameterless constructor to set default values*/
	student(string studentID, string firstName, string lastName, string emailAddr, int age, int daysToComplete[], DegreeProgram degreeProgram); /*Full constructor*/
	~student();/*destructor*/;

	/*getters*/
	string getID();
	string getFirstName();
	string getLastName();
	string getEmailAddr();
	int setAge();
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

