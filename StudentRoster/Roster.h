#pragma once
#include "student.h"

class Roster
{
public:
	int lastIndex = -1;
	const static int numberOfStudents = 5;
	Student* classRosterArray[numberOfStudents];

public:
	void parse(string row);
	void add(string studentID, string firstName, string lastName, string emailAddr, int age, int days_1, int days_2, int days_3, DegreeProgram degree);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degree);
	 ~Roster();

};

