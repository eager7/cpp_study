//
// Created by pct on 9/17/16.
//

#ifndef CPP_STUDY_TIME_H
#define CPP_STUDY_TIME_H

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int h = 0, int m = 0, int s = 0);
    ~Time();

    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    Time &setTime(int h, int m, int s);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void printUniversal();
    void printStandard();
};

#endif //CPP_STUDY_TIME_H
