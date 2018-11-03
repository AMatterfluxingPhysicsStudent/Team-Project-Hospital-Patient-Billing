#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

class PatientAccount
{
    
    private:
        double charges; //to hold total charge
        int days_in_hospital;

    public:
        int id; //patient id
        double daily_rate;
        void set_days_in_hospital(int);
        void setCharges(double);
        double get_charges();
        int get_days_in_hospital();
        double updateCharges(double daily_rate, int days_in_hospital, double charges);
        PatientAccount();

};

#endif