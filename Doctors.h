#include  <bits/stdc++.h>
using namespace std;

//doctors data
class doctor{
    public:
    string name = "";
    string department = "";
    string  type = "";
    string  PoA = "";
    string rating = "";
    string phone = "";
    string mail = "";
    string NoP = "";
    public:
    void about_doctor();
    void add_new();
};


void doctor::add_new()
{    
    cout<<"Enter doctors name : ";
    cin >> name;

    cout<<"Enter doctors department : ";
    cin>>department;
    //department = department;
            
    cout<<"Enter doctors type of employement : ";
    cin>>type;
    //d.type = type;

    cout<<"Enter doctors period of availability : ";
    cin>>PoA;
    //d.PoA = PoA;

    cout<<"Enter doctors rating : ";
    cin>>rating;
    //d.rating = rating;

    cout<<"Enter doctors mobile number : ";
    cin>>phone;
    //d.phone = phone;

    cout<<"Enter doctors email-id : ";
    cin>>mail;
    //d.mail = mail;

    cout<<"Enter number of patients he treated :" ;
    cin>>NoP;
    //d.NoP = NoP;
}

void doctor::about_doctor()
{
    cout<<"Name : ";
    cout << name << endl;

    cout<<"Department : ";
    cout << department << endl;

    cout<<"type of employement : ";
    cout << type << endl;

    cout<<"period of availability : ";
    cout << PoA << endl;

    cout<<"rating : ";
    cout << rating << endl;

    cout<<"mobile number : ";
    cout << phone << endl;

    cout<<"email-id : ";
    cout <<  mail << endl;

    cout << endl;
}