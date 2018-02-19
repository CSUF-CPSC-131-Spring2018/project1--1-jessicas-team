#include "Student.h"

#include <iostream>

Student::Student() {
	// TO BE COMPLETED
	
	//creates student obj.
	//initializes its cwid to nothing.
	//gives student 
	
}

Student::Student(const string &cwid) {
	// TO BE COMPLETED
	
	//refereneces cwid
	//starts student obj courses to 0.

}

string Student::getCWID() {
	// TO BE COMPLETED
	
	//return cwid;
}

void Student::addCourseGrade (const string &courseName, char grade) {
	// TO BE COMPLETED
	
	//allocates new mem for course name and grade.
	//increases course grade amount by 1.

}

double Student::getGPA() {
	// TO BE COMPLETED
	
	//basically how you wrote your code in your notes.
	//switch statement to apply a value to a grade.
	//adds up all the values.
	//gpa is calculated from adding all values and dividing by the number of courses
	//returns gpa.

}

// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667
void Student::printTranscript() {
	// TO BE COMPLETED
	
	//Checks for student objs.
	//cout<< "TRANSCRIPT FOR CWID= " << cwid<<endl; 
	//Calls student cwid and displays the classes and grades as is in the txt.file.
	//FOR SURE THERES A LOOP IN HERE SOMEWHERE?!?
	//cout<< "GPA= " << getGPA() << endl;

}

