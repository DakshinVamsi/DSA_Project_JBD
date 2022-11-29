#include <bits/stdc++.h>
using  namespace std;
#include "Doctors.h"

class patient
{
    public:
    string st_name = "";
    string dep = "";
    string ToE = "";
    string id = "";
    string phone = "";
    string mail = "";
    string address = "";
    doctor previous_visits[50];
    string cur_booked_slot = "";
    int no_pre_visits = -1;
    int ethics_rating = 0;
    public:
    void add_new_patient();
};

void patient::add_new_patient()
{    
    cout<<"Enter Patients name : ";
    cin >> st_name;

    cout<<"Enter Patients department : ";
    cin>>dep;
            
    cout<<"Enter Patients type of employement : ";
    cin>>ToE;
    
    cout << "Enter Patients Roll/Faculty Id :";
    cin >> id;

    cout<<"Enter Patients mobile number : ";
    cin>> phone;
    //d.phone = phone;

    cout<<"Enter Patients email-id : ";
    cin>>mail;
    //d.mail = mail;

    cout<<"Enter Ethics rating: " ;
    cin>>ethics_rating;
    //d.NoP = NoP;
}

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
        pat.cur_booked_slot = at_time;
        cout << "Slot is booked" << endl;
    }
    else
    {   
        cout << "Slot is Unavilable" << endl;
    }
}