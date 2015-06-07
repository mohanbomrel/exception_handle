#include<iostream>
#include<stdexcept>
#include<iomanip>
#include"MyTime.h"
#include "ValueOutofRangeException.h"

using namespace std;

MyTime::MyTime(int h, int m, int s)
{
    setTime(h,m,s);
}

void MyTime::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);

}

int MyTime::getHour()
{
    return hour;
}

int MyTime::getMinute()
{
    return minute;
}

int MyTime::getSecond()
{
    return second;
}

void MyTime::setHour(int h)
{
    if(h>=0 && h<=23) {
        this->hour = h;
    }
    else
    {
        throw ValueOutofRangeException();
    }

}

void MyTime::setMinute(int m)
{
    if(m>=0 && m<=59) {
    this->minute = m;
    }
    else
    {
        throw ValueOutofRangeException();
    }
}


void MyTime::setSecond(int s)
{
    if(s>=0 && s<=59) {
    this->second = s;
    }
    else
    {
        throw ValueOutofRangeException();
    }
}

MyTime& MyTime::nextSecond()
{
    if(++second == 60)
    {
        second = 0;
        ++minute;
        if(minute == 60){
            minute = 0;
            hour++;
            if(hour==24)
            {
                hour = 0;
            }
        }
    }
    return *this;
}

MyTime& MyTime::nextMinute()
{
    if(++minute == 60)
    {
        minute = 0;
        ++hour;
        if(hour == 24){
            hour =0;
        }
    }
    return *this;
}

MyTime& MyTime::nextHour()
{
    if( ++hour == 24) {
        hour = 0;
    }
    return *this;
}

void MyTime::toString()
{
    cout <<  setfill('0');
    cout << setw(2) <<  getHour()   << ":" << setw(2) << getMinute() << ":"
                << setw(2) << getSecond()  << endl;
}

