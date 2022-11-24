#include <bits/stdc++.h>
#include "Doctors.h"

using namespace std;

bool compare(doctor a, doctor b)
{
    return a.name[0] > b.name[0];
}

void show_list(list<doctor> List_of_Doctors)
{   
    list <doctor> :: iterator it;
    for(it = List_of_Doctors.begin(); it != List_of_Doctors.end(); it++)
    {
        doctor x = *it;
        x.about_doctor();
    }

}



int main()
{
    list<doctor> List_of_Doctors;
    cout<<"Welcome to IITH Help-desk"<<endl;
    cout<<"\n";
    bool show = true;
    string exit;
    while(show == true)
    {
        cout<<"Services related to doctors directory"<<endl;
        cout<<"\n";
        cout<<"1 -> To view doctors directory"<<endl;
        cout<<"2 -> To add/delete doctors details"<<endl;
        cout<<"3 -> To edit present doctors details"<<endl;
        cout<<"\n";
    //Taking input of kind of doctor service needed
        int doc_service;
        cin>>doc_service;
        if(doc_service == 1)
        {
            cout<<endl;
            cout<<"Doctors"<<endl;
            show_list(List_of_Doctors);

            cout<<"\n";
            cout<<endl;
            cout<<"Do you want to exit?(yes/no)"<<endl;
            cin>>exit;

            if(exit == "yes")
            {
                show = false;
            }
            else
            {
                show = true;
            }
        }
        else if(doc_service == 2)
        {
            cout<<"1 -> To add new doctors details"<<endl;
            cout<<"2 -> To delete present doctors details"<<endl;
            cout<<"\n";
            float add_or_delete_doc;
            cin >> add_or_delete_doc;
            if(add_or_delete_doc == 1)
            {
                doctor new_doctor;
                new_doctor.add_new();
                List_of_Doctors.push_back(new_doctor);
            }
        }
    }
}