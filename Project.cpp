#include <iostream>
using namespace std;

#include <vector>
#include <fstream>
#include <string>
#include <fstream>
#include <cstdio>
#include <string.h>

#include "Patients.h"




class node{
    public:
    doctor doc;
    node* next;

    node(doctor val){
        doc = val;
        next = NULL;
    }
};

class node_pat{
    public:
    patient pat;
    node_pat* next;

    node_pat(patient val){
        pat = val;
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

    while(temp->next != NULL )
    {
        if(strcmp(val.name.c_str(),(temp->next->doc).name.c_str())<0) break ;
       temp = temp->next; 
    }
    // temp->next = ptr;
    if(temp->next == NULL) {
    temp->next = ptr;
    ptr->next = NULL ;}
    else {
        a = temp->next ;
        temp ->next = ptr ;
        ptr ->next = a ;
    }
} }

void display(node* head){
    node* temp = head;
    
    while(temp!= NULL){
        cout<<temp->doc.name<< " " << temp->doc.department << " " << temp->doc.phone << " " << temp->doc.mail << endl ;
        temp = temp->next;
    }
}

void display_pat(node_pat* head){
    node_pat* temp = head;
    
    while(temp!= NULL){
        cout<<temp->pat.st_name<< " " << temp->pat.dep << " " << temp->pat.phone << " " << temp->pat.mail << endl ;
        temp = temp->next;
    }
}

void insertEnd_pat(node_pat* &head, patient val){
    node_pat* ptr = new node_pat(val);
    node_pat* a;

    if(head == NULL){
        head = ptr;
        return;
    }
    node_pat* temp = head; 

    if(strcmp(val.st_name.c_str(),temp->pat.st_name.c_str())<0) {
        ptr->next = head ;
        head = ptr ;
    }

    else {

    while(temp->next != NULL )
    {
        if(strcmp(val.st_name.c_str(),(temp->next->pat).st_name.c_str())<0) break ;
       temp = temp->next; 
    }
    // temp->next = ptr;
    if(temp->next == NULL) {
    temp->next = ptr;
    ptr->next = NULL ;}
    else {
        a = temp->next ;
        temp ->next = ptr ;
        ptr ->next = a ;
    }
} }

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

node_pat* edit_pat(node_pat* head,string pat_name) {
    node_pat* temp = head ;
    while(temp->pat.st_name != pat_name ) temp = temp->next ;

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

void dep(node* head,string dept) {
    node* temp = head ;
    while(temp != NULL) {
        if(temp->doc.department == dept) {
            cout << temp->doc.name << " [ Contact Number: " << temp->doc.phone << " ; Mail ID: " << temp->doc.mail <<"]" <<endl;    
        }
        temp = temp->next ;
    }
}

void edit_doctor(node* head)
{
    string edit_name;
    int edit_choice;
    cout << "Enter doctor's name : " ;
    cin >> edit_name;    
    cout << "What do you want to edit? : " << endl;
    cout << "1->Name" << endl;
    cout << "2->Department" << endl;
    cout << "3->Employment Type" << endl;
    cout << "4->Period of Availability" << endl;
    cout << "5->Phone" << endl;
    cout << "6-Mail ID" << endl; 
    cin >> edit_choice;
    if(edit_choice == 1)
    {
        string ed_name ;
        cout << "Enter new name: " ;
        cin >> ed_name;
        edit(head,edit_name)->doc.name = ed_name ;
    }
    else if(edit_choice == 2)
    {
        string ed_dep ;
        cout << "Enter new department: " ;
        cin >> ed_dep;
        edit(head,edit_name)->doc.department = ed_dep;
    }
    else if(edit_choice == 3)
    {
        string ed_employment;
        cout << "Enter new employment: ";
        cin >> ed_employment;
        edit(head,edit_name)->doc.type = ed_employment;
    }
    else if(edit_choice == 4)
    {
        string ed_PoA_from, ed_PoA_to;
        cout << "Enter new Period of Availability:" << endl;
        cout << "From :";
        cin >> ed_PoA_from;
        cout << "To :";
        cin >> ed_PoA_to;
        edit(head, edit_name)->doc.PoA[0] = ed_PoA_from;
        edit(head, edit_name)->doc.PoA[1] = ed_PoA_to;
    }
    else if(edit_choice == 5)
    {
        string ed_phone;
        cout << "Enter new Phone number: ";
        cin >> ed_phone;
        edit(head, edit_name)->doc.phone = ed_phone;
    }
    else if(edit_choice == 6)
    {
        string ed_mail;
        cout << "Enter new Mail-Id: ";
        cin >> ed_mail;
        edit(head, edit_name)->doc.mail = ed_mail;
    }
}



// //patients data
// class patient: public doctor{
//     public:
//     string st_name;
//     string dep;
//     string ToS;
//     string roll_no;
//     string PNo;
//     string email;
//     string adress;
//     doctor previous_visits[10];
//     int ethics_rating;
// };

int main(){
    node* head = NULL;
    node_pat* head_pat = NULL;

    ifstream MyReadFile;
    MyReadFile.open("BM2043_PROJECT_DATA.csv");
    string line = "" ;
    string inputString ;
    getline(MyReadFile,line) ;
    line = "" ;

    while(getline(MyReadFile,line)) {
        doctor New ;
        stringstream  inputString(line) ;
        getline(inputString,New.name,',');
        getline(inputString,New.mail,',');
        getline(inputString,New.phone,',');
        getline(inputString,New.type,',');
        getline(inputString,New.department,',');
        getline(inputString,New.rating,',');
        getline(inputString,New.NoP,',');

        if(!search(head,New.name)) insertEnd(head,New) ; 
    }
    

    
    cout<<"* * * * * Welcome to IITH Help-desk * * * * *"<<endl;
    cout<<"\n";
    bool show = true;
    string exit;
    while(show == true){
        cout<<"Services related to doctors directory"<<endl;
        cout<<"\n";
        cout<<"1 -> To view doctors directory"<<endl;
        cout<<"2 -> To add/delete doctors details"<<endl;
        cout<<"3 -> To edit present doctors details"<<endl;
        cout << "---------------------------------------------\n" << endl ; 
        cout << "Appointment system\n" << endl  ;
        cout << "4 -> Book an appointment" << endl ;
        cout << "5 -> Cancel an appointment\n" << endl ;
        cout << "---------------------------------------------\n" << endl ; 

        cout << "Patients log\n" << endl ;
        cout << "6 -> To view patients directory\n"  ;
        cout << "7 -> Give feedback" ;
        cout << "---------------------------------------------\n" << endl ; 


        //Vector for storing all doctors data
        vector<doctor> doc;

        //Taking input of kind of doctor service needed
        int doc_service;
        cin>>doc_service;

            if(doc_service == 1) {
                cout<<endl;
                cout<<"Doctors"<<endl;
                display(head);

                cout<<"\n";
                cout<<endl;
                cout<<"Do you want to exit?(yes/no)"<<endl;
                cin>>exit;

                if(exit == "yes"){
                        show = false;
                    }
                    else{
                        show = true;
                    } }
        
            else if(doc_service == 2) {
                cout<<"1 -> To add new doctors details"<<endl;
                cout<<"2 -> To delete present doctors details"<<endl;
                cout<<"\n";
                float add_delete_doc;
                cin>>add_delete_doc;
                if(add_delete_doc == 1){

                    doctor new_doctor;
                    new_doctor.create_slot() ;
                    new_doctor.add_new();
                    insertEnd(head, new_doctor);
                    fstream fout;   
  
    
                    fout.open("BM2043_PROJECT_DATA.csv", ios::out | ios::app);
                    fout << new_doctor.name << ", ";
                    fout << new_doctor.mail << ", ";
                    fout << new_doctor.phone << ", ";
                    fout << new_doctor.type << ", ";
                    fout << new_doctor.department << ", ";
                    fout << new_doctor.rating << ", ";

                    cout<<"details successfully uploaded into doctors directory"<<endl;
                    cout<<"\n";
                    
                    
                    cout<<"\n";
                    
                    cout<<"Do you want to exit?(yes/no)"<<endl;
                    cin>>exit;

                    if(exit == "yes"){
                        show = false;
                    }
                    else{
                        show = true;
                    }
                }
                else if(add_delete_doc == 2){
                    string del_name;
                    cout<<"Enter doctors name : ";
                    cin>>del_name;
                    if(search(head, del_name)){
                        Delete(head, del_name);
                        cout<<"Deleted successfully"<<endl;
                        cout<<"\n";
                    }
                    else{
                        cout<<"Doctors name not found"<<endl;
                        cout<<"\n";
                    }
                    cout<<"Do you want to exit?(yes/no)"<<endl;
                    cin>>exit;
                    if(exit == "yes"){
                        show = false;
                     }
                    else{
                        show = true;
                    }
                }  }
                
            else if(doc_service == 3) {
                edit_doctor(head);
                cout<<"Do you want to exit?(yes/no)"<<endl;
                    cin>>exit;
                    if(exit == "yes"){
                        show = false;
                     }
                    else{
                        show = true;
                    } }
            
            
            else if(doc_service == 4) {
                patient new_patient;
                new_patient.add_new_patient();
                cout << endl ;

                dep(head,new_patient.dep) ;
                cout << endl ;
                string ch_doc ;
                cout << "Enter doctor's name: " ;
                cin >> ch_doc ;
                create_apo(edit(head,ch_doc)->doc,new_patient);
                insertEnd_pat(head_pat,new_patient);

                cout<<"Do you want to exit?(yes/no)"<<endl;
                    cin>>exit;
                    if(exit == "yes"){
                        show = false;
                     }
                    else{
                        show = true;
                    } }
            else if(doc_service == 6) {
                cout<<endl;
                cout<<"Patients"<<endl;
                display_pat(head_pat);

                cout<<"\n";
                cout<<endl;
                cout<<"Do you want to exit?(yes/no)"<<endl;
                cin>>exit;

                if(exit == "yes"){
                        show = false;
                    }
                    else{
                        show = true;
                    }

                
            }
            else if(doc_service == 7) {
                string pat_name;
                cin >> pat_name ;
                // node_pat* x ;
                // doctor y;
                // x = edit_pat(head_pat,pat_name);
                // y = x->pat.previous_visits[x->pat.no_pre_visits-1] ;
                // int rate;
                // cin >> rate ;
                // y.rating = 


            }
         
    } }

    
