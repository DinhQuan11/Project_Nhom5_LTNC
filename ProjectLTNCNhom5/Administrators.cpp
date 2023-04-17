#include <fstream>

#include "Administrators.h"

Administrators::Administrators(string _strAccount, string _strPassword, string _strName,
	string _strDateOfbirth, string _strSalary, string _strEmail)
	:User(_strAccount, _strPassword, _strName, _strDateOfbirth, _strSalary, _strEmail) {}
Administrators::Administrators(const Administrators& admin) :User(admin) {}
Administrators::~Administrators() {}

void Administrators::readFileLogin(ifstream& inFile)
{
	User::readFileLogin(inFile);
}

void Administrators::createFile(ofstream& outFile, string strFileName)
{
	User::createFile(outFile, strFileName);
}

bool Administrators::operator == (Administrators admin)
{
	return admin.getAccount() + admin.getPassword() == getAccount() + getPassword();
}