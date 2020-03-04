#include <iostream>	
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include "Instructor.h"	
#include "InstructorList.h"

using namespace std;

class AddressBook{
	InstructorList* instanceList = new InstructorList;
	Instructor* instance1 = new Instructor;
	Instructor* instance2 = new Instructor;
	Instructor* instance3 = new Instructor;
};

void display(){

}

void add_new_instructor(char * title, char* f_name, char* l_name, char* phoneno, char* roomno, char * username, char * email){

}

void delete_instructor(char *title, char* f_name, char* l_name){


}

void list_all(char* f_name, char* l_name, char* phoneno, char* roomno){

}

void search(){

}

int main(){
	bool prog_continue = true;
	while(prog_continue){
		cin >>;
		cin >>;
		cin >>;
		cin >>;
		cin >>;
		cin >>;
		cin >>;
		cin >>;
		cout << "Do you want to continue: Y or N";   cin >> program;
		if ('y' || 'Y'){
			prog_continue = true;
		}
		else if('n' || 'N'){
			prog_continue = false;
		}
		else{
			cout << "You entered a wrong value!" << endl;
		}
	}
	
	
	return 0;
}