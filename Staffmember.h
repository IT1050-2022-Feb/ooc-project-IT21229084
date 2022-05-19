class Staffmember 
{
private:
	char Name[20];
	char Email[30];
	int Id;
	char UserName[15];
	char Password[15];
	
   

public:
	Staffmember();
	Staffmember(const char name[], const char email[], int id, const char Username[], const char password[]);
	void AddStaffmember();
	void UpdateStaffmember();
	void DeleteStaffmember();
	void Displaydetails();

};