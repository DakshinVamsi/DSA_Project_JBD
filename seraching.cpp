#include <bits/stdc++.h>
#include "Doctors.h"

using namespace std;

void search_using_name(string my_name, list<doctor> List_of_doctors)
{
    list<doctor> ::iterator it;
    for(it = List_of_doctors.begin(); it != List_of_doctors.end(); it++)
    {
        doctor x = *it;
        if(x.name == my_name)
        {
            x.about_doctor();
        }
    }
}

void search_using_ph_no(string ph_no, list<doctor> List_of_doctors)
{
    list<doctor> ::iterator it;
    for(it = List_of_doctors.begin(); it != List_of_doctors.end(); it++)
    {
        doctor x = *it;
        if(x.phone == ph_no)
        {
            x.about_doctor();
        }
    }
}

void search_using_mail(string mail, list<doctor> List_of_doctors)
{
    list<doctor> ::iterator it;
    for(it = List_of_doctors.begin(); it != List_of_doctors.end(); it++)
    {
        doctor x = *it;
        if(x.mail == mail)
        {
            x.about_doctor();
        }
    }
}