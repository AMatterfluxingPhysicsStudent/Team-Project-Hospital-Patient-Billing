#include "Pharmacy.h" 
#include <iostream>
#include <cstdlib> //needed for the exit func
using namespace std;

Pharmacy::Pharmacy()
{
  antipyreticsPrice = 100;
  analgesicsPrice = 150;
  antimalarialPrice = 200;
  antibioticsPrice = 250;
  antisepticsPrice = 300;  
}


void Pharmacy::updateCharges(PatientAccount& obj, double new_charges)
{
  obj.setCharges(new_charges);
}