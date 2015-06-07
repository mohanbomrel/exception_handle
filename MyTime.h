#ifndef MYTIME
#define MTTIME

class MyTime
{
public:
    MyTime();
    MyTime(int,int,int);

    void setTime(int,int,int);
    int getHour();
    int getMinute();
    int getSecond();

    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    void toString();

    MyTime& nextSecond();
    MyTime& nextMinute();
    MyTime& nextHour();

    int hour;
    int minute;
    int second;

};
#endif // MYTIME
