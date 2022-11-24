#include <bits/stdc++.h>
using namespace std;

float time(string str)
{
    //12:30 - 18:00
    float timming(2);
    timming = float(((int(str[0]) - 48)*10) + (int(str[1])*1 - 48)) + float(((int(str[3]) - 48)*10) + (int(str[4])*1 - 48))/60;
    return timming;
}

class doctor{
    public:
    string name;
    string department;
    string  type;
    string  PoA[2];
    float rating;
    string phone;
    string mail;
    float slots[100];
    doctor* next;
    int NoP;
    void create_slot()
    {
        float start = time(PoA[0]);
        float end = time(PoA[1]);
        float curr = start;
        for(int i = 0; i < (end - start)*2; i++)
        {
            slots[i] = curr;
            curr += 0.5;
        }
    }
};


int main()
{
    doctor mathew;
    mathew.name = "Mathew";
    cin >> mathew.PoA[0];
    cin >> mathew.PoA[1];
    mathew.create_slot();
    for(int i = 0; i < 11; i++)
    {
        cout << mathew.slots[i] << " ";
    }

    return 0;
} 