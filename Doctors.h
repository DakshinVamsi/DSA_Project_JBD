#include  <bits/stdc++.h>
using namespace std;


class node{
    public:
    doctor doc;
    node* next;

    node(doctor val){
        doc = val;
        next = NULL;
    }
};

void insertEnd(node* &head, doctor val){
    node* ptr = new node(val);
    node* a;

    if(head == NULL){
        head = ptr;
        return;
    }
    node* temp = head; 


    if(strcmp(val.name.c_str(),temp->doc.name.c_str())<0) {
        ptr->next = head ;
        head = ptr ;
    }

    else {

    while(temp->next != NULL || strcmp(val.name.c_str(),(temp->next->doc).name.c_str())>0)
    {
       temp = temp->next; 
    }
    // temp->next = ptr;
    a = temp->next;
    temp->next = ptr;
    ptr->next = a ;
} }

void display(node* head){
    node* temp = head;
    
    while(temp!= NULL){
        cout<<temp->doc.name<<"\t \t \t \t \t ";
        temp = temp->next;
    }
}

void Delete(node* &head, string val){
    node* temp = head;

    //if the value is at head
    if(head->doc.name == val){
        head = head->next; //deleting head and updating head
        return;
    }

    //value not at head
    while(temp != NULL)
    {
        if(temp->next->doc.name == val){
            temp->next = temp->next->next;
            return;
        }
        temp = temp->next;
    }
}

node* edit(node* head,string doc_name) {
    node* temp = head ;
    while(temp->doc.name != doc_name ) temp = temp->next ;

    return temp ;
}

bool search(node* &head, string val){
    node* temp = head;

    if(head == NULL){
        return false;
    }

    while(temp->doc.name != val){
        temp = temp->next;
        if(temp == NULL){
            return false;
        }
    }
    return true;
}


//doctors data
class doctor{
    public:
    string name = "";
    string department = "";
    string  type = "";
    string  PoA = "";
    float rating = 0;
    string phone = "";
    string mail = "";
    int NoP = -1;
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