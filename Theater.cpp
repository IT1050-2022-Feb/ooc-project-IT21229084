
#include "Theater.h"
#include <iostream>
#include <cstring>

using namespace std;

Theater::Theater()
{

	strcpy_s(Name, "Malith");
	strcpy_s(Location, "Colombo");
	NoOfSeat = 14;

}
Theater::Theater(const char name[], const char location[], int Noofseat)
{

	strcpy_s(Name,name);
	strcpy_s(Location,location);
	NoOfSeat = Noofseat;



}
void Theater::AddTheater()
{

}
void Theater::UpadteTheaterdeails()
{

}
void Theater::RemoveTheaterdetails()
{

}
void Theater::DisplayTheaterdetails()
{

	cout << "Theater Name - " << Name << endl;
	cout << "Theater Location - " << Location << endl;
	cout << "No of Seats - " << NoOfSeat << endl;


}