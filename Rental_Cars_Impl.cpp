#include<iostream>
#include<iomanip>
#include<string>
#include "Rental_Cars.h"
using namespace std;

void MyRentalCars::EnterName()
{
	cout << "Enter name:";
	getline(cin, Usersname);

	cout << setw(30) << "Hello " << Usersname << ", welcome to RentNRoll, where car rental is cheap and easy." << endl;
	cout << setw(105) << "How can we help you today.  Here is a list of vehicles for you to choose from for rental. " << endl;
	cout << setw(110) << "To choose the vehicle for rental, just enter the corrisponding number next to the vehicle listing. " << endl << endl;
	cout << setw(68) << "Rental per day is: $" << Rental_Per_Day_Price << endl << endl;

}
void MyRentalCars::VehicleType()
{
	cout << "Are you planning to rent a car, Van or truck? ";
	cin >> Vehicle_Type;

}

void MyRentalCars::DaysOfRental()
{
	cout << "how many days are you planning to rent the vehicle? ";
	cin >> RentalDays;
	cout << endl << endl << Usersname << " is renting a " << Vehicle_Type << " for " << RentalDays << " days. " << endl << endl;
}

void MyRentalCars::ShowRentalMenu()
{
	cout << setw(73) << "LIST OF AVAILABLE VEHICLES:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << setw(58) << i + 1 << ".) " << CarBrands[i] << endl;
	}
}

void MyRentalCars::VehicleBrand()
{
	cout << "Enter the number corrisponding to the brand of vehicle you would like to rent? ";
	cin >> Vehicle_Brand_Chose;
	Vehicle_Selection = CarBrands[Vehicle_Brand_Chose - 1];
	cout << endl;
}

void MyRentalCars::VehicleModel()
{
	cout << setw(73) << "LIST OF VEHICLE MODELS:" << endl;
	if (Vehicle_Selection == "Ford")
	{
		for (int x = 0; x < 5; x++)
		{
			cout << setw(58) << x + 1 << ".) " << FordModels[x] << endl;

		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle: ";
		cin >> Vehicle_Model_Chose;
		cout << "The user picked a " << Vehicle_Selection << " " << FordModels[Vehicle_Model_Chose - 1] << endl << endl;
	}
	else if (Vehicle_Selection == "Chevy")
	{
		for (int x = 0; x < 5; x++)
		{
			cout << setw(58) << x + 1 << ".) " << ChevyModels[x] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle: ";
		cin >> Vehicle_Model_Chose;
		cout << "The user picked a " << Vehicle_Selection << " " << ChevyModels[Vehicle_Model_Chose - 1] << endl << endl;
	}
	else if (Vehicle_Selection == "Toyota")
	{
		for (int x = 0; x < 6; x++)
		{
			cout << setw(58) << x + 1 << ".) " << ToyotaModels[x] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle: ";
		cin >> Vehicle_Model_Chose;
		cout << "The user picked a Toyota " << ToyotaModels[Vehicle_Model_Chose - 1] << endl << endl;
	}
	else if (Vehicle_Selection == "Murcades")
	{
		for (int x = 0; x < 3; x++)
		{
			cout << setw(58) << x + 1 << ".) " << MurcadesModels[x] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle: ";
		cin >> Vehicle_Model_Chose;
		cout << "The user picked a " << Vehicle_Selection << " " << MurcadesModels[Vehicle_Model_Chose - 1] << endl << endl;
	}
	else if (Vehicle_Selection == "Volvo")
	{
		for (int x = 0; x < 3; x++)
		{
			cout << setw(58) << x + 1 << ".) " << VolvoModels[x] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle: ";
		cin >> Vehicle_Model_Chose;
		cout << "The user picked a " << Vehicle_Selection << " " << VolvoModels[Vehicle_Model_Chose - 1] << endl << endl;
	}
}
void MyRentalCars::VehicleYear()
{
	cout << setw(73) << "LIST OF VEHICLE YEARS:" << endl;
	if (Vehicle_Selection == "Ford")
	{
		for (int y = 0; y < 5; y++)
		{
			cout << setw(58) << y + 1 << ".) " << FordYears[y] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle year: ";
		cin >> Vehicle_Year;
		cout << "The user picked a " << FordYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << FordModels[Vehicle_Model_Chose - 1] << " " << endl << endl;
	}
	else if (Vehicle_Selection == "Chevy")
	{
		for (int y = 0; y < 5; y++)
		{
			cout << setw(58) << y + 1 << ".) " << ChevyYears[y] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle year: ";
		cin >> Vehicle_Year;
		cout << "The user picked a " << ChevyYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << ChevyModels[Vehicle_Model_Chose - 1] << " " << endl << endl;
	}
	else if (Vehicle_Selection == "Toyota")
	{
		for (int y = 0; y < 5; y++)
		{
			cout << setw(58) << y + 1 << ".) " << ToyotaYears[y] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle year: ";
		cin >> Vehicle_Year;
		cout << "The user picked a " << ToyotaYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << ToyotaModels[Vehicle_Model_Chose - 1] << " " << endl << endl;
	}
	else if (Vehicle_Selection == "Murcades")
	{
		for (int y = 0; y < 3; y++)
		{
			cout << setw(58) << y + 1 << ".) " << MurcadesYears[y] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle year: ";
		cin >> Vehicle_Year;
		cout << "The user picked a " << MurcadesYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << MurcadesModels[Vehicle_Model_Chose - 1] << " " << endl << endl;
	}
	else if (Vehicle_Selection == "Volvo")
	{
		for (int y = 0; y < 3; y++)
		{
			cout << setw(58) << y + 1 << ".) " << VolvoYears[y] << endl;
		}
		cout << "Choose the model " << Vehicle_Selection << " vehicle year: ";
		cin >> Vehicle_Year;
		cout << "The user picked a " << VolvoYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << VolvoModels[Vehicle_Model_Chose - 1] << " " << endl << endl;
	}

}