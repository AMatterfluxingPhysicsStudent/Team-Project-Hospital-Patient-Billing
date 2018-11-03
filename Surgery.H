#ifndef SURGERY_H
#define SURGERY_H
#include <string>
#include <iostream>
#include "PatientAccount.h"
using namespace std;

class Surgery
{
    private:
        //
    public:
        Surgery();
        double appedectomyPrice;
        double cesareanSectionPrice;
        double septalMyectomyPrice;
        double bariatricPrice;
        double thoracicAorticDissectionRepairPrice;
        void updateCharges(PatientAccount& obj, double price);

};


#endif