#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
using namespace std;

void showSurgeryOptions();
void showPharmacyOptions();
double returnSurgeryPatientCharges(int, PatientAccount&, int&);
double returnPharmacyPatientCharges(int, PatientAccount&, int&);

#endif