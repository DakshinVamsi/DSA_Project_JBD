#include <iostream>
using namespace std;

#include <vector>
#include <fstream>
#include <string>
#include <fstream>
#include <cstdio>
#include <string.h>

#include "Doctors.h"


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

void dep(node* head,string dept) {
    node* temp = head ;
    while(temp != NULL) {
        if(temp->doc.department == dept) {
            cout << temp->doc.name << " [ Contact Number: " << temp->doc.phone << " ; Mail ID: " << temp->doc.mail <<"]" <<endl;    
        }
        temp = temp->next ;
    }
}

//patients data
class patient: public doctor{
    public:
    string st_name;
    string dep;
    string ToS;
    string roll_no;
    string PNo;
    string email;
    string adress;
    string history;
    int ethics_rating;
};

int main(){
    node* head = NULL;
    string File_name;
    ifstream MyReadFile("name.txt");
    while (getline (MyReadFile, File_name)) {
            //  cout<<File_name;
            insertEnd(head,File_name);
            }   

    MyReadFile.close();

    
    cout<<"Welcome to IITH Help-desk"<<endl;
    cout<<"\n";
    bool show = true;
    string exit;
    while(show == true){
        cout<<"Services related to doctors directory"<<endl;
        cout<<"\n";
        cout<<"1 -> To view doctors directory"<<endl;
        cout<<"2 -> To add/delete doctors details"<<endl;
        cout<<"3 -> To edit present doctors details"<<endl;
        cout<<"\n";

        //Vector for storing all doctors data
        vector<doctor> doc;

        //Taking input of kind of doctor service needed
        int doc_service;
        cin>>doc_service;

        switch(doc_service) {
            case 1 :
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
                    }
        
            case 2 :
                cout<<"1 -> To add new doctors details"<<endl;
                cout<<"2 -> To delete present doctors details"<<endl;
                cout<<"\n";
                float add_delete_doc;
                cin>>add_delete_doc;
                if(add_delete_doc == 1){
                    string name;
                    string department;
                    string  type;
                    string  PoA;
                    float rating;
                    string phone;
                    string mail;
                    int NoP;

                    doctor new_doctor;
                    new_doctor.add_new();
                    insertEnd(head, new_doctor);
                    cout<<"details successfully uploaded into doctors directory"<<endl;
                    cout<<"\n";
                    
                    // ofstream MyFile("name.txt");
                    // // Write to the file
                    // MyFile.append(new_doctor.name);
                    // // Close the file
                    // MyFile.close();

                    std::ofstream outfile;
                    outfile.open("name.txt", std::ios_base::app); // append instead of overwrite
                    outfile <<new_doctor.name; 

                    
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
                } }
                
                // else if(doc_service == 3) {
                //     string edit_name ;
                //     int edit_choice;
                //     cout << "Enter doctor's name : " ;
                //     cin >> edit_name;

                
                //     cout << "What do you want to edit? : " << endl ;
                //     cout << "1->Name" << endl ;
                //     cout << "2->Department" << endl ;
                //     cout << "3->Employment Type" << endl ;
                //     cout << "4->Period of Availability" << endl ;
                //     cout << "5->Phone" << endl ;
                //     cout << "6-Mail ID" << endl ;

                //     cin >> edit_choice ;
                //     switch(edit_choice) {
                //         case 1:
                //           string ed_name ;
                //           cout << "Enter new name: " ;
                //           cin >> ed_name;
                //           edit(head,edit_name)->doc.name = ed_name ;
                //         case 2:
                //           string ed_dep ;
                //           cout << "Enter new department: " ;
                //           cin >> ed_dep;
                //           edit(head,edit_name)->doc.department = ed_name ;
                //         case 3:
                //           string ed_etype ;
                //           cout << "Enter new employment type: " ;
                //           cin >> ed_etype;
                //           edit(head,edit_name)->doc.type = ed_name ;
                //         case 4:
                //           string ed_poa ;
                //           cout << "Enter new period of availability: " ;
                //           cin >> ed_poa;
                //           edit(head,edit_name)->doc.PoA = ed_name ;
                //         case 5:
                //           string ed_num ;
                //           cout << "Enter new number: " ;
                //           cin >> ed_num;
                //           edit(head,edit_name)->doc.phone = ed_name ;
                //         case 6:
                //           string ed_mail ;
                //           cout << "Enter new email: " ;
                //           cin >> ed_mail;
                //           edit(head,edit_name)->doc.mail = ed_name ;        
                          
                //     }
                //     cout<<"Do you want to exit?(yes/no)"<<endl;
                //     cin>>exit;

                //     if(exit == "yes"){
                //         show = false;
                //      }
                //     else{
                //         show = true;
                //     }
                // }           
    }

    
}