#include "Surgery.h" 
#include <iostream>
#include <cstdlib> //needed for the exit func
using namespace std;

Surgery::Surgery()
{
	appedectomyPrice = 8000;
	cesareanSectionPrice = 22000;
	septalMyectomyPrice = 180000;
	bariatricPrice = 15000;
	thoracicAorticDissectionRepairPrice = 16000;
}

void Surgery::updateCharges(PatientAccount& obj, double new_charges)
{
	obj.setCharges(new_charges);
}