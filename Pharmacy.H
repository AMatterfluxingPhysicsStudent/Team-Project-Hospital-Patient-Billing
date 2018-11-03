#ifndef PHARMACY_H
#define PHARMACY_H
#include <string>
#include <iostream>
#include "PatientAccount.h" 
using namespace std;

class Pharmacy
{
    private:
        //
    public:
        Pharmacy();
        double antipyreticsPrice;
        double analgesicsPrice ;
        double antimalarialPrice;
        double antibioticsPrice;
        double antisepticsPrice;
        void updateCharges(PatientAccount& obj, double price);

};

#endif