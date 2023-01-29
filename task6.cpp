#include<iostream>
using namespace std;
void patients(int days);
main()
 {
    int days;
    cout<< "Enter days: ";
    cin>>days;
    patients(days);
 }
void patients(int days)
 {
    int patientno, treated = 0, untreated = 0, doctors = 7, c;
    for(int i = 1; i <= days; i++)
     {
        cout<<"Enter number of patients: ";
        cin>>patientno;
        if(patientno > 7)
         {
            if(i % 3 == 0 && untreated > treated)
             {
                doctors++;
             }
            untreated = (patientno - doctors) + untreated;
            treated = treated + doctors;
         }
         if(patientno <= 7)
         {
          treated = treated + patientno;
         }
     }
    cout<<"Treated patients: " <<treated <<endl;
    cout<<"Untreated patients: " <<untreated <<endl;
 }
