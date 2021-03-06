#pragma once
#include <string>
#include <stdexcept>
#include "Student.h"

using namespace std;

class Registrar {
public:

	Registrar();
	~Registrar();
	void readTextfile(string filename); // Load information from a text file with the given filename: THIS IS COMPLETE
	void addLine(string courseName, string cwid, char grade); // process a line from the text file
	Student& getStudent(string cwid) const; // return the Student object corresponding to a given CWID
											// getStudent must throw an exception if cwid is invalid
											// add constructors, destructors, assignment operators if needed
	Registrar & operator=(const Registrar & reg);
	
	Registrar(const Registrar &reg);
	
private:
	
	
	string courseName, cwid;
	string filename;
	char grade;
	int size;
	const int max=50000;
	Student* indiv;
	
};
