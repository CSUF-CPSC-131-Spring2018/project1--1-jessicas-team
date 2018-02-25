#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Registrar.h"
#include "Student.h"

using namespace std;

Registrar::Registrar()
{
	indiv = new Student[max];
	size = 0;
	
}

Registrar::~Registrar()
{
	delete[] indiv;
	indiv = NULL;

}


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
			 /*cout << cwid << " " << grade << endl;*/
			addLine(courseName, cwid, grade);
		}
		myfile.close();
	}
	else
		throw invalid_argument("Could not open file " + filename);
}

 /*return Student object corresponding to a given CWID
 getStudent must throw an exception if cwid is invalid*/
Student& Registrar::getStudent(string cwid) const {
	// TO BE COMPLETED
	int index = 0;
	
	while (index < size)
	{		//add size in default set 0
		
		if (indiv[index].getCWID() == cwid) {
			return indiv[index];	//return indiv[i]
		}
		else {
			index++;
		}
	}
	throw invalid_argument("Invalid cwid");
}


Registrar & Registrar::operator=(const Registrar & reg)
{
	courseName = reg.courseName;
	cwid = reg.cwid;
	filename = reg.filename;
	grade = reg.grade;
	size = reg.size;
	for (int i = 0; i < max; i++) {
		indiv[i] = reg.indiv[i];
	}
	return *this;
}

Registrar::Registrar(const Registrar & reg) : max(50000)
{
	indiv = new Student[max];
	 courseName= reg.courseName;
	 cwid = reg.cwid;
	 filename = reg.filename;
	 grade = reg.grade;
	 size = reg.size;
	 for (int i = 0; i < max; i++) {
		 indiv[i] = reg.indiv[i];
	 }
}



// process a line from the text file
//if student exists, it updates and adds course grade to their info 
//if student does not exist, then adds student to student array and updates size
void Registrar::addLine(string courseName, string cwid, char grade) {
	// TO BE COMPLETED
	try {
		//We are updating an already exisiting student
		Student &s = getStudent(cwid);
		s.addCourseGrade(courseName, grade);
		/*s.courseNum++;*/
	}
	catch (exception &e)
	{
		indiv[size] = Student(cwid);
		
		indiv[size].addCourseGrade(courseName, grade);
		/*indiv[size].courseNum++;*/
		size++;
		

	}
	
	
}
