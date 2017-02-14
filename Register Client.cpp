#include <iostream>
#include "Register.h"
#include <vector>
using namespace std;

int main()
{
	string ID;
	string sName;
	Register Reg, Reg2, Reg3, Reg4;

	vector <Register> vReg;

	cout << "What is your ID number: ";
	cin >> ID;
	Reg.setStudentID(ID);

	cout << "Enter user name: ";
	cin >> sName;
	Reg.setStudentName(sName);
	vReg.push_back(Reg);

	cout << "What is your ID number: ";
	cin >> ID;
	Reg2.setStudentID(ID);

	cout << "Enter user name: ";
	cin >> sName;
	Reg2.setStudentName(sName);
	vReg.push_back(Reg2);


	cout << "What is your ID number: ";
	cin >> ID;
	Reg3.setStudentID(ID);

	cout << "Enter user name: ";
	cin >> sName;
	Reg3.setStudentName(sName);
	vReg.push_back(Reg3);

	cout << "What is your ID number: ";
	cin >> ID;
	Reg4.setStudentID(ID);

	cout << "Enter user name: ";
	cin >> sName;
	Reg4.setStudentName(sName);
	vReg.push_back(Reg4);

	for (int i = 0; i < vReg.size(); i++)
	{
		cout << "User name is " << vReg[i].getStudentName() << " with assigned identification number "
		<< vReg[i].getStudentID(); cout << endl;
	}
	system("pause");
	return 0;
}
