//
// Created by pct on 9/17/16.
//
#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s){
    cout<<"create Time"<<endl;
    setTime(h, m, s);
}

Time::~Time() {
    cout<<"delete Time"<<endl;
}

Time &Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this;
}

void Time::setHour(int h){
    hour = (h < 0 || h>24) ? 0 : h;
}

void Time::setMinute(int m) {
    minute = (m < 0 || m>60) ? 0 : m;
}

void Time::setSecond(int s) {
    second = (s < 0 || s>60) ? 0 : s;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

void Time::printUniversal() {
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}

void Time::printStandard() {
    cout<<setfill('0')<<setw(2)<<((hour == 12)?12:hour%12)<<":"<<setw(2)
    <<minute<<":"<<setw(2)<<second<<(hour < 12 ? " AM" : " PM")<<endl;
}
