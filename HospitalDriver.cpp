#include <iostream>
#include "Menu.h"
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
using namespace std;

int main()
{
	PatientAccount patient;
	patient.id = 0;

	int surgery;
	int medication;
  int surgeryCost = 0;
  int medicationCost = 0;

	do
	{
		showSurgeryOptions();
		showPharmacyOptions();

		cout << "What type of surgery would you like? Please choose a number." << endl;
		cin >> surgery;
		cout << endl;

		
		cout << "What type of medication would you like? Please choose a number." << endl;
		cin >> medication;

		if (surgery == 6 || medication == 6)
		{
			break;
		}

		returnSurgeryPatientCharges(surgery, patient, surgeryCost);
		cout << "The charge for this surgery is $";
		cout << surgeryCost << endl;

		returnPharmacyPatientCharges(medication, patient, medicationCost);
		cout << "The charge for this medication is $";
		cout << medicationCost << endl;
    cout << "Current Total Charge: $"<<patient.get_charges()<<endl<<endl<<endl;
	} while(surgery != '\0' && surgery != 6 && medication != '\0' && medication != 6);


	if (surgery == 6 || medication == 6)
	{
		cout << "How many days did the patient stay?" << endl;

		int num_days;
    unsigned int stayPrice;
    unsigned int totalPrice;
		cin >> num_days;
		patient.set_days_in_hospital(num_days);

		cout << "You entered " << patient.get_days_in_hospital() << " days." << endl;
    stayPrice = patient.get_days_in_hospital() * patient.daily_rate;
		cout << "The total cost for those days is $" << stayPrice<< endl;
    totalPrice =  patient.updateCharges(patient.daily_rate, patient.get_days_in_hospital(), patient.get_charges());
		cout << "Cumlative Charge: $" <<totalPrice<< endl;
	}
  
	return 0;
}
