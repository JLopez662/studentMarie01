/*
Jorge Lopez Gonzalez
801-09-3312 
*/

#include "Student.h"
using namespace std;
//Construct ****************
Student::Student(){
    name=" ";
    year=0;
    grades=new double[5]; //Arreglo dinamico
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

    for(int i=0;i<5;i++)
    {
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

double Student::getAve() const {
    double sum=0;
    for (int i=0;i<5;i++){ sum +=grades[i]; }
    return sum/5;
}
//Asignacion comienza aqui--------------------------------------------------------
char Student::letterGrade() const
{
    //Inicializamos double promedio y con el getter tenemos el valor promedio
    double average = getAve();

    //Por si acaso
    if(average > 100 || average < 0 ){ cout <<"\nEstas notas son invalidas" << endl; }


    if(average >= 89.5 && average <= 100) { return 'A';}       //Saco A
    else if (average >= 79.5 && average < 89.5) { return 'B';} //Saco B si no llega a 89.5
    else if (average >= 69.5 && average < 79.5) { return 'C';} //Saco C si no llega a 79.5
    else if (average >= 59.5 && average < 69.5) { return 'D';} //Saco D si no llega a 69.5
    else { return 'F'; }                                       //Saco F si no llega a 59.5
}

//Esta funcion la necesitamos si queremos que funcione getMaxOverallGrade()
double Student::getMaxGrade() const
{
    double temp = grades[0];        //Inicializamos temp
    for(int i = 0; i < 5; i++)
    {
        if(temp < grades[i]) { temp = grades[i]; }  //Guarda nota mas alta
    }
    return temp;
}

//Funcion para buscar Nota mas alta entre arreglo de estudiantes 
double Student::getMaxOverallGrade(Student A[], int size) const
{
    double max = 0.0;
    //En caso que sea solo 1 estudiante!
    for(int x = 0; x < size; x++)
    {
        if(max < A[x].getMaxGrade()) { max = A[x].getMaxGrade(); }
    }
    //Si comparamos 2 o mas estudiantes
    for(int i = 0, j = 1; i < size && j < size; i++, j++)
    {
        if ( max < A[i].getMaxGrade() ) { max = A[i].getMaxGrade(); }

        if(max < A[j].getMaxGrade()) { max = A[j].getMaxGrade(); }
    }
    return max;
}

