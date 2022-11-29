#include <bits/stdc++.h>
using namespace std;

#include "Doctors.h"
class patient
{
    public:
    string st_name;
    string dep;
    string ToS;
    string roll_no;
    string PNo;
    string email;
    string adress;
    doctor previous_visits[50];
    int no_pre_visits = 0;
    int ethics_rating;
};