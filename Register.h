#ifndef REG_H 
#define REG_H
#include <string>

//Register class definition
class Register
{
public:
	Register();
	void setStudentID(std::string ID);
	std::string getStudentID();
	void setStudentName(std::string sName);
	std::string getStudentName();
private:
	std::string studentID;
	std::string studentName;
};
#endif