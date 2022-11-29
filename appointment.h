#include <bits/stdc++.h>
using  namespace std;
#include "Doctors.h"

void doctor::print_slots()
{
    for(int i = 0; i < no_of_slots; i++)
    {
        if((int)slots[i] !=slots[i])
        {
            cout << (int)slots[i] << ":30" << ' ';
        }
        else
        {
            cout << slots[i] << ":00" << ' ';
        }
        //cout << slots[i] << ' ';
    }
    cout << endl;
}

void create_apo(doctor &doc)
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
        cout << "slot is booked" << endl;
    }
    else
    {   
        cout << "Slot is already booked" << endl;
    }
}