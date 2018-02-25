#pragma once
#include <string>
#include <stdexcept>
#include "Student.h"

using namespace std;

class Registrar {
public:
	Registrar(); //Constructor // TO BE COMPLETED
	~Registrar(); //Destructor // TO BE COMPLETED
	void readTextfile(string filename); // Load information from a text file with the given filename: THIS IS COMPLETE
	void addLine(string courseName, string cwid, char grade); // process a line from the text file
	Student& getStudent(string cwid) const; // return the Student object corresponding to a given CWID
	// getStudent must throw an exception if cwid is invalid
	// add constructors, destructors, assignment operators if needed

private:
	// Add private member variables for your class along with any 
	// other variables required to implement the public member functions
	// TO BE COMPLETED
	
	string coursName, cwid; //possibly unnecessary.
	char grade; //possibly unnecessary.
	int size = 0; //Number of Students in the class. //Can probably set to 0 in the .cpp instead of .h 
	const int max = 50000; //possibly unnecessary.**
	student *indiv; //keep this
};
