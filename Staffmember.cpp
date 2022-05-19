#include "Staffmember.h"
#include<iostream>
#include<cstring>
using namespace std;

Staffmember::Staffmember()
{
	strcpy_s(Name, "");
	strcpy_s(Email, "");
	Id = 0;
	strcpy_s(UserName,"");
	strcpy_s(Password,"");

}
Staffmember::Staffmember(const char name[], const char email[],int id,const char Username[],const char password[])
{
	strcpy_s(Name, name);
	strcpy_s(Email, email);
	Id = id;
	strcpy_s(UserName, Username);
	strcpy_s(Password, password);

}

void Staffmember::AddStaffmember()
{

}
void Staffmember::UpdateStaffmember()
{

}
void Staffmember::DeleteStaffmember()
{

}
void Staffmember::Displaydetails()
{
	cout << "Name -" << Name << endl;
	cout << "Id No -" << Id << endl;
	cout << "Email -" << Email << endl;
	cout << "UserName -" << UserName << endl;
	cout << "Password -" << Password << endl;
	cout << endl;

}