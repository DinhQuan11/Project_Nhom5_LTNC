#include <fstream>

#include "Employees.h"

Employees::Employees(string _strAccount, string _strPassword, string _strName,
	string _strDateOfbirth, string _strSalary, string _strEmail)
	:User(_strAccount, _strPassword, _strName, _strDateOfbirth, _strSalary, _strEmail) {}
Employees::Employees(const Employees& empl) :User(empl) {}
Employees::~Employees() {}

void Employees::inputInfo()
{
	User::inputInfo();
}

void Employees::readFileLogin(ifstream& inFile)
{
	User::readFileLogin(inFile);
}

void Employees::createFile(ofstream& outFile, string strFileName)
{
	User::createFile(outFile, strFileName);
}

bool Employees::operator == (Employees empl)
{
	return empl.getAccount() + empl.getPassword() == getAccount() + getPassword();
}