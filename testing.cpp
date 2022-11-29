#include <bits/stdc++.h>
using namespace std;
#include "Patients.h"
#include "Doctors.h"

int main()
{
    doctor mathew;
    mathew.add_new();
    patient krithik;
    mathew.create_slot();
    //mathew.print_slots();
    cout << mathew.no_of_slots << endl;
    for(int i = 0; i < 2; i++)
    {
        create_apo(mathew, krithik);
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
*/