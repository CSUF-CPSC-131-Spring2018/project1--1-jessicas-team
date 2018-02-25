#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Registrar.h"

using namespace std;

// Load information from a text file with the given filename
// THIS FUNCTION IS COMPLETE
void Registrar::readTextfile(string filename) {
	ifstream myfile(filename);

	if (myfile.is_open()) {
		cout << "Successfully opened file " << filename << endl;
		string courseName;
		string cwid;
		char grade;
		while (myfile >> courseName >> cwid >> grade) {
			// cout << cwid << " " << grade << endl;
			addLine(courseName, cwid, grade);
		}
		myfile.close();
	}
	else
		throw invalid_argument("Could not open file " + filename);
}

// return Student object corresponding to a given CWID
// getStudent must throw an exception if cwid is invalid
Student& Registrar::getStudent(string cwid) const {
	// TO BE COMPLETED
	//DELETE LATER
	//student *ptr;
	//ptr = head;
	//bool found;
	//found = false;
	//while ((ptr != NULL) && (found == false)){
	//if(ptr-> getCWID() == tcwid){
	//found = true; }
	//else {
	//throw invalid_argument ("Invalid CWID"); }
	//if (found == true) {
	//return *ptr } }
}

// process a line from the text file
//if student exists, it updates and adds course grade to their info 
//if student does not exist, then adds student to student array and updates size
void Registrar::addLine(string courseName, string cwid, char grade) {
	// TO BE COMPLETED
	try {
		//updating an already existing student.
		student &s = getStudent(cwid);
		s.addCourseGrade(courseName, grade);
	}
	catch (excepion &e)
	{
		//DELETE LATER
		//student *t= new student(cwid);
		//t-> setNext(head);
		//head = t;
		//size++;
		//t-> addCourseGrade(courseName, grade); 
		indiv[size] = student(cwid);
		indiv[size].addCourseGrade(courseName, grade);
		size++;
	}
}

Registrar::Registrar() //default constructor.
	// TO BE COMPLETED
{
	//size = 0;
	//head = nullptr;
}

Registrar::~Registrar() //destructor.
	// TO BE COMPLETED
{
	
}
