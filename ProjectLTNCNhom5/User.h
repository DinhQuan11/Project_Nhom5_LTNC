#pragma once

using namespace std;

class User
{
private:
	string strAccount;
	string strPassword;
	string strName;
	string strDateOfbirth;
	string strSalary;
	string strEmail;
public:
	// Get - set
	string getAccount();
	string getPassword();
	string getName();
	string getDateOfbirth();
	string getSalary();
	string getEmail();
	void setAccount(string _strAccount);
	void setPassword(string _strPassword);
	void setName(string _strName);
	void setDateOfbirth(string _strDateOfbirth);
	void setSalary(string _strSalary);
	void setEmail(string _strEmail);

	// Constructor - destructor
	User(string _strAccount = "", string _strPassword = "111111", string _strName = "",
		string _strDateOfbirth = "", string _strSalary = "", string _strEmail = "");
	User(const User& user);
	~User();

	// Nhập thông tin
	virtual void inputInfo();

	// Đọc file tài khoản và mật khẩu
	virtual void readFileLogin(ifstream& inFile);

	// Đọc file thông tin User
	virtual void readFileUser(ifstream& inFile);

	// Mở file
	virtual void openFile(ifstream& inFile, string strFileName);

	// Tạo file
	virtual void createFile(ofstream& outFile, string strFileName);

	// Xóa file
	virtual void deleteFile(string strFileName);
};