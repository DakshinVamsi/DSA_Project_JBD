#include  <bits/stdc++.h>
using namespace std;

class doctor
{
    public:
    string name;
    string department;
    string  type;
    string  PoA;
    float rating;
    string phone;
    string mail;
    doctor* next;
    int NoP;
};

void d_directory(doctor* head)
{
    int i = 0;
    while(head != NULL)
    {
        cout << i+1 << "." << head -> name << endl;
        head = head -> next;
    }
}

void add_new(doctor d)
{    
    string name;
    string department;
    string  type;
    string  PoA;
    float rating;
    string phone;
    string mail;
    int NoP;
    cout<<"Enter doctors name"<<" : ";
    cin>>name;
    d.name = name;

    cout<<"Enter doctors department"<<" : ";
    cin>>department;
    d.department = department;
            
    cout<<"Enter doctors type of employement"<<" : ";
    cin>>type;
    d.type = type;

    cout<<"Enter doctors period of availability"<<" : ";
    cin>>PoA;
    d.PoA = PoA;

    cout<<"Enter doctors rating"<<" : ";
    cin>>rating;
    d.rating = rating;

    cout<<"Enter doctors mobile number"<<" : ";
    cin>>phone;
    d.phone = phone;

    cout<<"Enter doctors email-id"<<" : ";
    cin>>mail;
    d.mail = mail;

    cout<<"Enter number of patients he treated"<<" :" ;
    cin>>NoP;
    d.NoP = NoP;
}

void about_doctor(doctor d)
{
    cout<<"Name"<<" : ";
    cout << d.name << endl;

    cout<<"Department"<<" : ";
    cout << d.department << endl;

    cout<<"type of employement"<<" : ";
    cout << d.type << endl;

    cout<<"period of availability"<<" : ";
    cout << d.PoA << endl;

    cout<<"rating"<<" : ";
    cout << d.rating << endl;

    cout<<"mobile number"<<" : ";
    cout << d.phone << endl;

    cout<<"email-id"<<" : ";
    cout <<  d.mail << endl;
}