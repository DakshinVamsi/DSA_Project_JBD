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
    cout<<"Enter doctors name"<<" : ";
    cin>>d.name;
    cout << endl;

    cout<<"Enter doctors department"<<" : ";
    cin>>d.department;

    cout<<"Enter doctors type of employement"<<" : ";
    cin>>d.type;

    cout<<"Enter doctors period of availability"<<" : ";
    cin>>d.PoA;

    cout<<"Enter doctors rating"<<" : ";
    cin>>d.rating;

    cout<<"Enter doctors mobile number"<<" : ";
    cin>>d.phone;

    cout<<"Enter doctors email-id"<<" : ";
    cin>> d.mail;
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