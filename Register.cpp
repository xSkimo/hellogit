#include <iostream>
#include <string>
#include "Register.h"
using namespace std;

Register::Register() //Constructor
{
	studentID = "0";
	studentName = " ";
}

void Register::setStudentName(string sName)
{
	studentName = sName;
}

string Register::getStudentName()
{
	return studentName;
}

void Register::setStudentID(string ID)
{
	studentID = ID;
}

string Register::getStudentID()
{
	return studentID;
}
