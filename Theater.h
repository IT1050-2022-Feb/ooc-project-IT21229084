class Theater
{
private:
	char Name[20];
	char Location[15];
	int NoOfSeat;


public:
	Theater();
	Theater(const char name[],const char location[], int Noofseat);
	void AddTheater();
	void UpadteTheaterdeails();
	void RemoveTheaterdetails();
	void DisplayTheaterdetails();

};
