#include "PatientAccount.h" 
#include <iostream>
#include <cstdlib> //needed for the exit func
using namespace std;

PatientAccount::PatientAccount()
{
	charges = 0;
	days_in_hospital = 0;
	daily_rate = 100;
}

double PatientAccount::get_charges()
{
	return charges;
}

int PatientAccount::get_days_in_hospital()
{
	return days_in_hospital;
}

void PatientAccount::set_days_in_hospital(int days)
{
	days_in_hospital = days;
}

void PatientAccount::setCharges(double new_charges)
{
	charges += new_charges; 
}

double PatientAccount::updateCharges(double daily_rate, int days_in_hospital, double charges)
{
	double days_charge = daily_rate * days_in_hospital;
	charges = charges + days_charge;
	return charges;
}