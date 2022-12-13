// Rental_Cars_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Rental_Cars.h"

int main()
{
	MyRentalCars Cars;
	Cars.EnterName();
	Cars.VehicleType();
	Cars.DaysOfRental();
	Cars.ShowRentalMenu();
	Cars.VehicleBrand();
	Cars.VehicleModel();
	Cars.VehicleYear();

	float TotalPrice = 0;
	Cars.RentalPricePlusDays(TotalPrice);
	Cars.ExportRentalFile();

	return 0;
}