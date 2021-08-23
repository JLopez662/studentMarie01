/*
Jorge Lopez Gonzalez
801-09-3312
*/

//2021

//  main.cpp
//  clasesExp
//
//  Created by Marie Lluberes on 5/13/20.
//  Copyright © 2020 Marie Lluberes. All rights reserved.

#ifndef STUDENTMARIE_STUDENT_H
#define STUDENTMARIE_STUDENT_H

#include <iostream>
#include<string>

using namespace std;

class Student {
private:
    string name;
    int year;
    double notas[5];
    double *grades;
    double temp;


public:

    Student();
    Student (string);
    void setName(string);
    void setYear(int);
    void setNotas();
    void setGrades();
    string getName();
    int getYear();
    const double *getNotas();
    const double *getGrades();
    double getAve() const;

    char letterGrade() const;
    double getMaxGrade() const;
    double getMaxOverallGrade(Student A[], int size) const;

    ~Student(){ delete [] grades;}
};


#endif //STUDENTMARIE_STUDENT_H
