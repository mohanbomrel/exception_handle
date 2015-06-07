/*
Author  : Mohan Singh Bomrel
Date    :2015/06/07
Program : Implementing Exception Handling using time class
*/
#include <iostream>
#include "MyTime.h"
#include "ValueOutofRangeException.h"

using namespace std;

int main()
{
    int hour,minute,second;
    cout << "Enter the time [HH, MM ,SS]" << endl;
    while (cin >> hour >>minute>> second)
        {
        try
            {
            MyTime t1(hour,minute,second);
            t1.toString();

             cout << "After Increment of One Second" << endl;
             t1.nextSecond();
             t1.toString();

            cout << "\n\n";
            cout << "After increment of One Minute" << endl;
            t1.nextMinute();
            t1.toString();

            cout <<"\n\n";
            cout << "After increment of One Hour" << endl;
            t1.nextHour();
            t1.toString();
            }
        catch (ValueOutofRangeException &valueOutofRange)
        {
            cout << "Exception Occured !!! "
                 << valueOutofRange.what() << endl;
        }
        cout << "Enter the time [HH, MM, SS]" << endl;
    }
    cout << endl;
}
