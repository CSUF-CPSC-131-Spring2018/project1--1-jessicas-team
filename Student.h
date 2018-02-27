#pragma once
#include <string>

using namespace std;



class Student {
public:
	Student(); // default constructor
	Student(const string &tcwid); // constructor with parameter
	void addCourseGrade(const string &courseName, char grade); // add course name and grade to student's record
	double getGPA(); // calculate and return GPA
	void printTranscript(); // print transcript - see Student.cpp for the format
	string getCWID(); // return the CWID of this student
private:
	
	string courseName, cwid;
	double gpa;
	int courseNum, num = 0, count;
	char grade;
	
	string *Tcourse = new string[50];
	char *Cgrade = new char[50];

	
};
