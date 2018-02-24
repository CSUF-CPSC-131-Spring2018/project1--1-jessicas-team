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
	int index=0;
	while(index<size){		//add size in default set 0
		if(student[i].getCWID==CWID){
			return student[i];
		}
		else {
			index++;
		}
	}
	throw invalid_arguement("cwid is Invalid");
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
	catch {
		indiv[size] = student(cwid);
		indiv[size].addCourseGrade(courseName, grade);
		size++;
	}
}

