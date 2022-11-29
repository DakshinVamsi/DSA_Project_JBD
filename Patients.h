#include <bits/stdc++.h>
using  namespace std;
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
    public:
    //void create_apo(doctor &doc);
};


void create_apo(doctor &doc, patient &pat)
{
    doc.print_slots();
    string at_time;
    cout << "Enter your prefered tim : ";
    cin >>  at_time;
    float time_in_float_form = time(at_time);
    int curr = 0;
    for(int i =0; i < doc.no_of_slots; i++)
    {   
        if(time_in_float_form == doc.slots[i])
        {
            curr = i;
        }
    }
    cout << curr << endl;
    if(doc.free_slots[curr] == false)
    {
        doc.free_slots[curr] = true;
        pat.no_pre_visits += 1;
        pat.previous_visits[pat.no_pre_visits] = doc;
        cout << "Slot is booked" << endl;
    }
    else
    {   
        cout << "Slot is Unavilable" << endl;
    }
}