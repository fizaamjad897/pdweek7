#include<iostream>
using namespace std;
void upperpyramid(int rows);
void lowerpyramid(int rows);
main()
 {
    int rows;
    cout<< "Enter number of Rows: ";
    cin>>rows;
    upperpyramid(rows);
    lowerpyramid(rows);
 }
 void upperpyramid(int rows)
  {
    for(int r = 1 ; r<= rows ; r++)
     {
       for(int s = rows ; s >= r ; s--)
        {
            cout<< " ";
        }
       for(int c = 1 ; c <= r ; c++)
        {
            cout<<"*";
        }
       cout<<endl;
     }
     }
 void lowerpyramid(int rows)
    {
    for(int r = 1 ; r <= rows ; r++)
     {
       for(int s = 1 ; s <= r ; s++)
        {
            cout<< " ";
        }
       for(int c = rows ; c >= r ; c--)
        {
            cout<<"*";
        }
       cout<<endl;
     }
    }

  
