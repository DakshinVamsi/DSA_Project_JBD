#include  <bits/stdc++.h>
using namespace std;

float time(string str)
{
    //12:30 - 18:00
    float timming(2);
    timming = float(((int(str[0]) - 48)*10) + (int(str[1])*1 - 48)) + float(((int(str[3]) - 48)*10) + (int(str[4])*1 - 48))/60;
    return timming;
}

//doctors data
class doctor{
    public:
    string name = "";
    string department = "";
    string  type = "";
    string  PoA[2];
    string rating = "";
    string phone = "";
    string mail = "";
    string NoP = "";
    float slots[100];
    float no_of_slots = 0;
    bool free_slots[100] = {0};
    public:
    void about_doctor();
    void add_new();
    void create_slot()
    {
        float start = time(PoA[0]);
        float end = time(PoA[1]);
        float curr = start;
        for(int i = 0; i < (end - start)*2; i++)
        {
            slots[i] = curr;
            curr += 0.5;
            no_of_slots+= 0.5;
        }
    }
    void print_slots();
};

void doctor::print_slots()
{
    for(int i = 0; i < no_of_slots; i++)
    {
        if(free_slots[i]  == false)
        {
            if((int)slots[i] != slots[i])
            {
                cout << (int)slots[i] << ":30" << ' ';
            }
            else
            {
                cout << slots[i] << ":00" << ' ';
            }
        }
        //cout << slots[i] << ' ';
    }
    cout << endl;
}


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

    cout<<"Enter doctors period of availability : "<<endl;
    cout << "From : ";
    cin>>PoA[0];
    cout << "To : ";
    cin >> PoA[1];
    //d.PoA = PoA;
    create_slot();
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

    cout<<"Period of availability : ";
    cout << PoA[0] << "to"<<PoA[1] << endl;

    cout<<"rating : ";
    cout << rating << endl;

    cout<<"mobile number : ";
    cout << phone << endl;

    cout<<"email-id : ";
    cout <<  mail << endl;

    cout << endl;
}