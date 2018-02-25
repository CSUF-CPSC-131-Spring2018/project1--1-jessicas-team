#include "Student.h"

#include <iostream>

Student::Student() {
	//COMPLETED
	cwid = " "; //assigns student blank cwid.
	courseNum = 0; //sets amount of courses to 0;
	// next = nullptr; //DELETE LATER
}

Student::Student(const string &tcwid) {
	//COMPLETED
	cwid = tcwid; //references cwid to a variable. 
	courseNum = 0;
	// next -> nullptr; //DELETE LATER
}


string Student::getCWID() { 
	//COMPLETED.
	return cwid;
}

void Student::addCourseGrade (const string &courseName, char grade) {
	//COMPLETED
	Tcourse[courseNum]= courseName; //references courseName.
	Cgrade[courseNum]= grade;
	courseNum++; //increases course grade amount by 1.
}

 
double Student::getGPA() { 
	//COMPLETED.
	//gpa is calculated from adding all values and dividing by the number of courses.
	char grade;
	double gpa;
	double sum = 0, total = 0;
	
	for (int i=0; i < courseNum; i++)
	{
		grade = Cgrade[i]; //switch statement to apply a value to a grade.
		switch grade {
			case 'A':
				sum = 4;
				break;
			case 'B':
				sum = 3;
				break;
			case 'C':
				sum = 2;
				break;
			case 'D':
				sum = 1;
				break;
			case 'F':
				sum = 0;
				break;
			default:
				sum = 0;
		}
		total = total + sum; //adds up all the values.
	}
	gpa = total / courseNum;
	return gpa;//Returns GPA.
}

// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667


void Student::printTranscript() { 
	//COMPLETED.
	cout<< "TRANSCRIPT FOR CWID= " << cwid <<endl; //Displays CWID of student.
	for (int i=0; i <= courseNum; i++) //Loops through the number of courses.
	{
		cout<< courseName[i] << " " << courseGrade[i] << endl; //Displays name of course and corresponding grade.
	}
	cout<< "GPA= " << getGPA() << endl;//Displays GPA of Current Student.
}

//Student *getNext(){ //DELETE LATER
//return next; }

//void Student::getNext(Student *tnext){ //DELETE LATER
//next= tnext; }
