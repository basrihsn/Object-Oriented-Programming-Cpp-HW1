#include <iostream>	
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include "Instructor.h"	

class InstructorList{
	void add_new_instructor();
	void delete_instructor();
	void list_all(char* f_name, char* l_name, char* phoneno, char* roomno);
	void search();
public:
	InstructorList(...);
	InstructorList(...);
	friend Instructor::Instructor(char*, char*, char*, char*,int*, char*, char*);
	
};

InstructorList::InstructorList(){
//default size array
}

InstructorList::InstructorList(){
	//given size array
}