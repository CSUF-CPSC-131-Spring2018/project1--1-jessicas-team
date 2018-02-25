#pragma once
#include <string>

using namespace std;

class Student {
public:
	Student(); // default constructor
	Student(const string &cwid); // constructor with parameter
	void addCourseGrade(const string &courseName, char grade); // add course name and grade to student's record
	double getGPA(); // calculate and return GPA
	void printTranscript(); // print transcript - see Student.cpp for the format
	string getCWID(); // return the CWID of this student
	//Student *getNext(); //returns next pointer //DELETE LATER
	//void setNext(Student *tnext); //linked list operations //DELETE LATER
private:
	// any private member variables and methods go here
	// TO BE COMPLETED
	//Student *next; //DELETE LATER
	string cwid; 
	int courseNum;
	string Tcourse[50];
	char Cgrade[50];
	
	double gpa; //Probably unnecessary.
	
	friend class Registrar; //Probably unnecessary.
};
