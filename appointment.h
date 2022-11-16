// Appointment system


vector<bool> Slots(n,1)  ;

//Interface to be written in main file


void NewAppointment(patient* x,doctor* head)  {
    doctor* temp = head ;
    int choice ;

    string Doctor ;
    cout << "Enter doctor's name: " ;
    cin >> Doctor ;

    while(temp != NULL) { 
        if(strcmp(temp->name,Doctor)) break ;
        temp = temp->next ;
    }


    cout << "Available time slots: " << endl ;
    for(int i=0 ; i<Slots.size() ;i++) {
        if(temp->Slots[i] == 1) cout << i+1<< ". " <<  i/3 << ':' << (i%3)*20 << " to " <<  (i+1)/3 << ":" << ((i+1)%3)*20  << endl ;

    }

    cout << "Choose slot:"  ;
    cin >> choice ; 

    temp->Slots[choice-1] = 0 ; //Slot gets booked
 
    
}

int waiting_time(vector<bool> slots) {
    int time;

    for(int i=0;i<Slots.size();i++) {
        if(i == 0) 
    }
    return 


} 