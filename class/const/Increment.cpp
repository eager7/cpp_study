//
// Created by pct on 9/18/16.
//
#include "Increment.h"
#include <iostream>
using namespace std;

Increment::Increment(int c, int i)
        :count(c),increment(i) {
    cout<<"create Increment"<<endl;
}

void Increment::print() const {
    cout<<"count:"<<count<<endl<<"increment:"<<increment<<endl;
}