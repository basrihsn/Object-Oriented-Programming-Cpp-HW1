#include <iostream>	
#include <cstring>
#include <stdlib.h>
#include <string>
#include <fstream> 

class Instructor{
private:
	char * title;
	char * firstname;
	char * lastname;
	char * phonenumber;
	int * roomnumber;
	char * username;
	char * emailaddress;
public:
	void display();
	void courses(char str[]);
	Instructor(char*, char*, char*, char*,int*, char*, char*);
	
};

Instructor::Instructor(char* title, char* fname, char* lname, char* pnum, int* rnum, char* uname, char* email)
{
	//filling given data
}