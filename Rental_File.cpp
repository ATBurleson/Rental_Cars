#include<iostream>
#include<fstream>
#include"Rental_Cars.h"
void MyRentalCars::RentalPricePlusDays(float TotalPrice)
{
	TotalPrice = Rental_Per_Day_Price * RentalDays;
	std::cout << "Your total rental price comes out to be: $" << TotalPrice << std::endl << std::endl;
}
void MyRentalCars::ExportRentalFile()
{
	std::cout << "A rental file will now be created." << std::endl << std::endl;
	std::ofstream RentalFile("RentalFile.txt");
	RentalFile << "Here is the rental information for " << Usersname << std::endl;
	RentalFile << "Vehicle type picked: " << Vehicle_Type << std::endl;
	RentalFile << "Vehicle brand picked: " << CarBrands[Vehicle_Brand_Chose - 1] << std::endl;
	if (Vehicle_Selection == "Ford")
	{
		RentalFile << Usersname << " is renting a " << Vehicle_Selection << " " << FordModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " is renting a " << FordYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << FordModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " rental price comes out to be: $" << Rental_Per_Day_Price * RentalDays;
	}
	else if (Vehicle_Selection == "Chevy")
	{
		RentalFile << Usersname << " is renting a " << Vehicle_Selection << " " << ChevyModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " is renting a " << ChevyYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << ChevyModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " rental price comes out to be: $" << Rental_Per_Day_Price * RentalDays;
	}
	else if (Vehicle_Selection == "Toyota")
	{
		RentalFile << Usersname << " is renting a " << Vehicle_Selection << " " << ToyotaModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " is renting a " << ToyotaYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << ToyotaModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " rental price comes out to be: $" << Rental_Per_Day_Price * RentalDays;
	}
	else if (Vehicle_Selection == "Murcades")
	{
		RentalFile << Usersname << " is renting a " << Vehicle_Selection << " " << MurcadesModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " is renting a " << MurcadesYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << MurcadesModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " rental price comes out to be: $" << Rental_Per_Day_Price * RentalDays;
	}
	else if (Vehicle_Selection == "Volvo")
	{
		RentalFile << Usersname << " is renting a " << Vehicle_Selection << " " << VolvoModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " is renting a " << VolvoYears[Vehicle_Year - 1] << " " << Vehicle_Selection << " " << VolvoModels[Vehicle_Model_Chose - 1] << std::endl;
		RentalFile << Usersname << " rental price comes out to be: $" << Rental_Per_Day_Price * RentalDays;
	}



	RentalFile.close();
}