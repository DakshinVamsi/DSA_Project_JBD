#include <bits/stdc++.h>
using namespace std;
#include "Patients.h"

int main()
{
    doctor mathew;
    mathew.add_new();
    patient krithik;
    krithik.add_new_patient();
    mathew.create_slot();
    //mathew.print_slots();
    cout << mathew.no_of_slots << endl;
    for(int i = 0; i < 3; i++)
    {
        create_apo(mathew, krithik);
        cout << krithik.previous_visits[krithik.no_pre_visits].name << endl;
    }
    //create_apo(mathew);
    return 0;
}
/*
adsfg
asg
asdg
12:00
18:00
1
aasdf
asdgrgh
3
krithik
asd
asdad
sags
asdjjoi9
ajs
1
*/