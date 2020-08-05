

#include "Student.h"
using namespace std;
//Construct ****************
Student::Student(){
    name=" ";
    year=0;
    grades=new double[5];
}

Student::Student(string n){
    name=n;
    year=0;
    grades=new double[5];
}

//Setters****************
void Student::setName(string n){
    name=n;
}

void Student::setYear(int y){
    year=y;
}

void Student::setNotas(){
    for(int i=0;i<5;i++){
        cout<<"Entre la nota "<<i+1<<" :";
        cin>>notas[i];
    }
}

void Student::setGrades(){

    for(int i=0;i<5;i++){
        cout<<"Entre la nota "<<i+1<<" :";
        cin>>grades[i];
    }

}
//Getters***************

string Student::getName(){
    return name;
}

int Student::getYear(){
    return year;
}

const double* Student::getNotas(){
    return notas;
}

const double* Student::getGrades(){
    return grades;
}

double Student::getAve(){
    double sum=0;
    for (int i=0;i<5;i++){
        sum +=grades[i];
    }
    return sum/5;
}