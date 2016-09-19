//
// Created by pct on 9/17/16.
//

#ifndef CPP_STUDY_INCREMENT_H
#define CPP_STUDY_INCREMENT_H

class Increment
{
private:
    int count;
    const int increment ;
public:
    Increment(int c = 0, int i = 1);

    void addIncrement(){
        count += increment;
    }
    void print() const ;
};

#endif //CPP_STUDY_TIME_H
