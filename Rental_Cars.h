/*If the derived class is declared with the keyword class , the default access specifier in its base list specifiers is private .
If the derived class is declared with the keyword struct , the default access specifier in its base list specifiers is public .*/
/*************************************************************************************************************************************/
#pragma once
class MyRentalCars
{
	//classes in C++ are private by default
	//therefore no need to specify private.
	std::string CarBrands[5] = { "Ford", "Chevy", "Toyota", "Murcades", "Volvo" };
	std::string FordModels[5] = { "F150", "F250", "F350", "Exploeror", "Focus" };
	std::string ChevyModels[5] = { "Silverado", "Malibu", "Impala", "Cruze", "Traverse" };
	std::string ToyotaModels[6] = { "Highlander", "Tacoma", "Tundra", "Camry", "Sienna", "4Runner" };
	std::string MurcadesModels[3] = { "GLS", "GLC-Coupe", "G Wagon" };
	std::string VolvoModels[3] = { "XC60", "XC40", "XC90" };

	int FordYears[5] = { 2020, 2019, 2015, 2010, 2008 };
	int ChevyYears[5] = { 2020, 2018, 2016, 2012, 2011 };
	int ToyotaYears[5] = { 2019, 2017, 2016, 2010, 2009 };
	int MurcadesYears[3] = { 2021, 2020, 2015 };
	int VolvoYears[3] = { 2014, 2013, 2007 };

	std::string Usersname, Vehicle_Type, Vehicle_Selection;
	int RentalDays, Vehicle_Brand_Chose, Vehicle_Model_Chose;
	int Vehicle_Year;
	float Rental_Price_Plus_Days, Rental_Per_Day_Price = 5.80;


public:
	//void DisplayTime();
	void EnterName();
	void ShowRentalMenu();
	void DaysOfRental();
	void VehicleType();
	void VehicleBrand();
	void VehicleModel();
	void VehicleYear();
	void RentalPricePlusDays(float TotalPrice = 0);
	void ExportRentalFile();

};