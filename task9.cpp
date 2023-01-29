#include<iostream>
using namespace std;
void twopyramids(int rows);
main()
 {
    int rows;
    cout<< "Enter number of Rows: ";
    cin>>rows;
    twopyramids(rows);
 }
 void twopyramids(int rows)
  {
    for(int r = 0; r <= rows ; r++)
     {
        for(int c = 0 ; c <= 2 * rows; c++)
         {
            if(r >= c)
             {
                cout<< "*";
             }
            else 
            {
                cout<< " ";
            }
           if(r >= (2 * rows) - c)
            {
                cout<< "*";
            }
           else 
            {
                cout<< " ";
            }
         }
     cout<<endl;   
     }
  }

