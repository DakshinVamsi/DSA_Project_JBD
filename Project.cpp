#include <bits/stdc++.h>
using namespace std;


//doctors data
class doctor
{
    public:
    doctor* next;
    string name;
    string department;
    string  type;
    string  PoA;
    float rating;
    string phone;
    string mail;
    int NoP;
};

//patients data
class patient: public doctor
{
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

void Insert(doctor* head,doctor* doc) {
    doctor* temp = head;
    if(head == NULL) head = doc;

    while(temp->next != NULL) temp = temp->next;
    temp->next = doc;

}

void d_directory(doctor* head)
{
    int i = 0;
    while(head != NULL)
    {
        cout << i+1 << "." << head -> name << endl;
        head = head -> next;
    }
}

/*void Ddirectory(vector<doctor> &doctors){
    cout<<"Welcome to Doctors directory"<<endl;
    cout<<"\n";
    for(int i=0; i< doctors.size(); i++){
        cout<<"Doctor "<<i+1<<endl;
        cout<<"Name : "<<doctors[i].name<<endl;
        cout<<"Department : "<<doctors[i].department<<endl;
        cout<<"Type of employement : "<<doctors[i].type<<endl;
        cout<<"Period of availability : "<<doctors[i].PoA<<endl;
        cout<<"Feedback Rating : "<<doctors[i].rating<<endl;
        cout<<"Phone no. : "<<doctors[i].phone<<endl;
        cout<<"Mail-id : "<<doctors[i].mail<<endl;
        cout<<"Number of patients : "<<doctors[i].NoP<<endl;
    }

    cout<<"\n";
    cout<<"END"<<endl;
}*/

void showEnd(){
    cout<<"Welcome to IITH Help-desk"<<endl;
    cout<<"\n";

    cout<<"Services related to doctors directory"<<endl;
    cout<<"\n";
    cout<<"1 -> To view doctors directory"<<endl;
    cout<<"2 -> To add/delete doctors details"<<endl;
    cout<<"3 -> To edit present doctors details"<<endl;
    cout<<"\n";
    //Vector for storing all doctors data
    vector<doctor> doc;

    int doc_service;
    cin>>doc_service;

    if(doc_service == 1){
        //Ddirectory(doc);
    }
    else if(doc_service == 2){
        cout<<"1 -> To add new doctors details"<<endl;
        cout<<"2 -> To delete present doctors details"<<endl;
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

            doctor d;
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

            doc.push_back(d);
            cout<<"details successfully uploaded into doctors directory"<<endl;
            cout<<"\n";
            
            cout<<"1 -> To view doctors directory"<<endl;
            cout<<"2 -> To add/delete doctors details"<<endl;
            cout<<"3 -> To edit present doctors details"<<endl;
            cout<<"\n";
            
            string exit;
            cout<<"Do you want to exit?(yes/no)"<<endl;
            cin>>exit;
            if(exit == "no"){
                    showEnd();
            }
        }
        else if(add_delete_doc == 2){
            string delete_name;
            cin>>delete_name;
            for(auto i=doc.begin();i != doc.end(); i++) {
            
                //if(delete_name.compare(doc[i].name) == 1) {
                //    doc.erase(i) ;
//
                //}
            }
        }
    }
}

int main(){

    cout<<"Welcome to IITH Help-desk"<<endl;
    cout<<"\n";

    cout<<"Services related to doctors directory"<<endl;
    cout<<"\n";
    cout<<"1 -> To view doctors directory"<<endl;
    cout<<"2 -> To add/delete doctors details"<<endl;
    cout<<"3 -> To edit present doctors details"<<endl;
    cout<<"\n";
    cout<< "Manage Feedbacks" << endl ;
    cout<<"1 -> ";
    //Vector for storing all doctors data
    //vector<doctor> doc;

    int doc_service;
    cin>>doc_service;

    if(doc_service == 1){
        //Ddirectory(doc);
    }
    else if(doc_service == 2){
        cout<<"1 -> To add new doctors details"<<endl;
        cout<<"2 -> To delete present doctors details"<<endl;
        float add_delete_doc;
        cin>>add_delete_doc;
        if(add_delete_doc == 1){
            

            //doc.push_back(d);
            cout<<"details successfully uploaded into doctors directory"<<endl;
            cout<<"\n";
            
            cout<<"1 -> To view doctors directory"<<endl;
            cout<<"2 -> To add/delete doctors details"<<endl;
            cout<<"3 -> To edit present doctors details"<<endl;
            cout<<"\n";
            
            string exit;
            cout<<"Do you want to exit?(yes/no)"<<endl;
            cin>>exit;
            if(exit == "no"){
                    showEnd();
            }
        }
        else if(add_delete_doc == 2){
            string delete_name;
            cin>>delete_name;
            // if(delete_name == )
        }
    }
}
