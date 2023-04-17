#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "User.h"
#include "Menu.h"

using namespace std;

string User::getAccount()
{
	return strAccount;
}
string User::getPassword()
{
	return strPassword;
}
string User::getName()
{
	return strName;
}
string User::getDateOfbirth()
{
	return strDateOfbirth;
}
string User::getSalary()
{
	return strSalary;
}
string User::getEmail()
{
	return strEmail;
}
void User::setAccount(string _strAccount)
{
	strAccount = _strAccount;
}
void User::setPassword(string _strPassword)
{
	strPassword = _strPassword;
}
void User::setName(string _strName)
{
	strName = _strName;
}
void User::setDateOfbirth(string _strDateOfbirth)
{
	strDateOfbirth = _strDateOfbirth;
}
void User::setSalary(string _strSalary)
{
	strSalary = _strSalary;
}
void User::setEmail(string _strEmail)
{
	strEmail = _strEmail;
}

User::User(string _strAccount, string _strPassword, string _strName,
	string _strDateOfbirth, string _strSalary, string _strEmail)
{
	strAccount = _strAccount;
	strPassword = _strPassword;
	strName = _strName;
	strDateOfbirth = _strDateOfbirth;
	strSalary = _strSalary;
	strEmail = _strEmail;
}
User::User(const User& user)
{
	strAccount = user.strAccount;
	strPassword = user.strPassword;
	strName = user.strName;
	strDateOfbirth = user.strDateOfbirth;
	strSalary = user.strSalary;
	strEmail = user.strEmail;
}
User::~User() {}

void User::inputInfo()
{
	cin.ignore();

	setColor(0, 11);
	cout << endl << setw(18) << "" << "Nhap thong tin User:" << endl;

	cout << setw(18) << " -> " << "Ho ten: \t";
	getline(cin, strName);

	cout << setw(18) << " -> " << "Ngay sinh: \t";
	getline(cin, strDateOfbirth);

	cout << setw(18) << " -> " << "Luong: \t";
	getline(cin, strSalary);

	cout << setw(18) << " -> " << "Email: \t";
	getline(cin, strEmail);
}

void User::readFileLogin(ifstream& inFile)
{
	getline(inFile, strAccount, ',');
	getline(inFile, strPassword);
}

void User::readFileUser(ifstream& inFile)
{
	getline(inFile, strName);
	getline(inFile, strDateOfbirth);
	getline(inFile, strSalary);
	getline(inFile, strEmail);
}

void User::openFile(ifstream& inFile, string strFileName)
{
	char szFileName[20];
	char szFileExtension[5] = ".txt";

	strcpy_s(szFileName, strFileName.c_str()); // Copy chuỗi strFileName đã ép kiểu vào szFileName
	strcat_s(szFileName, szFileExtension); // Ghép chuỗi - ghép phần mở rộng của tệp

	if (szFileName != NULL) // Nếu không NULL thì mở file
	{
		inFile.open(szFileName, ios_base::in);
	}
}

void User::createFile(ofstream& outFile, string strFileName)
{
	char szFileName[20];
	char szFileExtension[5] = ".txt";

	strcpy_s(szFileName, strFileName.c_str()); // Copy chuỗi strFileName đã ép kiểu vào szFileName
	strcat_s(szFileName, szFileExtension); // Ghép chuỗi - ghép phần mở rộng của tệp

	if (szFileName != NULL) // Nếu không NULL thì tạo file
	{
		outFile.open(szFileName, ios_base::out);
	}
}

void User::deleteFile(string strFileName)
{
	char szFileName[20];
	char szFileExtension[5] = ".txt";

	strcpy_s(szFileName, strFileName.c_str()); // Copy chuỗi strFileName đã ép kiểu vào szFileName
	strcat_s(szFileName, szFileExtension); // Ghép chuỗi - ghép phần mở rộng của tệp
	remove(szFileName); // Xóa file
}