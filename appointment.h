// Appointment system


vector<bool> Slots() ;

//Interface to be written in main file


void NewAppointment(patient* x,doctor* head)  {
    doctor* temp = head ;

    string Doctor ;
    cout << "Enter doctor's name: " ;
    cin >> Doctor ;

    while(temp != NULL) {
        if(strcmp(temp->name,Doctor)) break ;
        temp = temp->next ;

    }



    


    //Check doctor's available hours and create a bool vector of (end time - start time)/30 mins slots
    //If the slot reads 0 -> BOOKED ; 1 -> AVAILABLE and display that time slot


    cout << "Available time slots: " << endl ;
    for(int i=0 ; i<slots.size() ;i++) {
        if(temp->Slots[i] == 1) cout << hrs + (i-1)/2 << ':' << mins 
    }

    cout << "Choose slots" 




    
}

int waiting_time(vector<bool> slots) {
    return 


} 