#include "Menu.h"
#include <iostream>
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
using namespace std;

void showSurgeryOptions()
{
	cout << "SURGERY OPTIONS" << endl;
	cout << "1. Appedectomy: $8000" << endl;
	cout << "2. Cesarean Section: $22000" << endl;
	cout << "3. Septal Myectomy: $180000" << endl;
	cout << "4. Bariatric: $15000" << endl;
	cout << "5. Thoracic Aortic Dissection Repair: $16000" << endl;
	cout << "6. Checkout Patient" << endl;

}

void showPharmacyOptions()
{
	cout << "PHARMACY OPTIONS" << endl;
	cout << "1. Antipyretics: $100" << endl;
	cout << "2. Analgesics: $150" << endl;
	cout << "3. Antimalarial: $200" << endl;
	cout << "4. Antibiotics: $250" << endl;
	cout << "5. Antiseptics: $300" << endl;
	cout << "6. Checkout Patient" << endl;
}

double returnSurgeryPatientCharges(int surgery, PatientAccount& patient, int& surgeryCost)
{  
  Surgery operation;
	if (surgery == 1)
	{
    surgeryCost = operation.appedectomyPrice;
	}
	else if (surgery == 2)
	{
    surgeryCost = operation.cesareanSectionPrice;
	}
	else if (surgery == 3)
	{
    surgeryCost = operation.septalMyectomyPrice;
	}
	else if (surgery == 4)
	{
    surgeryCost = operation.bariatricPrice;
	}
	else
	{
    surgeryCost = operation.thoracicAorticDissectionRepairPrice;
	}
  operation.updateCharges(patient, surgeryCost);
	return patient.get_charges();
}

double returnPharmacyPatientCharges(int medication, PatientAccount& patient, int& medicationCost)
{
  Pharmacy getMed;
	if (medication == 1)
	{
		medicationCost = getMed.antipyreticsPrice;

	}
	else if (medication == 2)
	{
		medicationCost = getMed.analgesicsPrice;
	}
	else if (medication == 3)
	{
		medicationCost = getMed.antimalarialPrice;
	}
	else if (medication == 4)
	{
		medicationCost = getMed.antibioticsPrice;
	}
	else
	{
		medicationCost = getMed.antisepticsPrice;
	}
  getMed.updateCharges(patient, medicationCost);
	return patient.get_charges();
}
