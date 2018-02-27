#include "Student.h"

#include <iostream>
#include <iomanip>

Student::Student() {
	cwid = "";
	courseNum = 0;
}

Student::Student(const string &tcwid) {
	cwid = tcwid;
	courseNum = 0;
}

string Student::getCWID() {
	return cwid;
}

void Student::addCourseGrade(const string &courseName, char grade) {
	Tcourse[courseNum] = courseName;
	Cgrade[courseNum] = grade;
	courseNum ++;
}

double Student::getGPA() {
	char grade;								
	double gpa = 0, sum = 0, total=0;

	
	for (int i = 0; i < courseNum; i++) {
		grade = Cgrade[i];
		switch (grade) {
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
		total=total+sum;
	}

	gpa=total / courseNum;
	
	return gpa;
}



// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667
void Student::printTranscript() {
	

	cout << "\nTRANSCRIPT FOR CWID = " << cwid << endl;
	for (int i = 0; i < (courseNum); i++){
		cout <<setw(10)<<left<< Tcourse[i] <<setw(10)<<right<< Cgrade[i] << endl;
		}
		cout<<"GPA="<< getGPA() << endl;
}
