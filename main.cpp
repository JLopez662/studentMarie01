/*
Jorge Lopez Gonzalez
801-09-3312 
*/

#include <iostream>
#include "Student.h"

using namespace std;

//Main
int main() {
    //**************************************************************************************************
    //NOTA: Si va a crear memoria dinámica, DEBE  crearla con el constructor. Si quiere entender
    //      por qué, haga el ejercicio usando arreglos de objetos con la función setGrades creando
    //      la memoria como mostramos en el ejemplo. HINT: está destruyendo un objeto cuya memoria no se creó.
    //**************************************************************************************************


   //-----------------------CODIGO DEFAULT---------------------------
    //cout << "\nLas notas del estudiante son: " << endl;

    /*
    for (int i=0; i < 5; i++)
    {
        cout<<ptr[i]<<" ";
    }



    //cout<< "\nEl promedio del estudiante es: " << promedio << endl;

    //cout << "\nPor lo tanto, su nota es: " << letter << endl;
    //------------------------------------------------------------------------

    computos[0].setGrades();
    double promedio =computos[0].getAve();
    char letter = computos[0].letterGrade();

    const double *ptr=nullptr;

    ptr=computos[0].getGrades();
    cout << "\nLas notas del estudiante son: " << endl;

    for (int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout << endl;
    cout<< "\nEl promedio del estudiante es: " << promedio << endl;

    cout << "\nPor lo tanto, su nota es: " << letter << endl;

    */

    //--------------------------------COMIENZA TAREA---------------------------------------
    int size;
    double promedio;
    char letter;
    const double *ptr=nullptr;

    Student computos[size]; //Arreglo de estudiantes (de computos)
    Student sociales("Jose");

    cout << "De cuantos estudiantes verificaremos las notas?: ";
    cin >> size; //Cantidad de estudiantes

    if(size < 1){ cout << "\nEsta cantidad es invalida "; }  //Si no hay estudiantes

    for(int i = 0; i < size; i++)
    {
        cout << "\nVerificando Estudiante: " << i+1 << endl;   //Verificando el estudiante #
        cout << endl;
        computos[i].setGrades();                              //Notas de cada estudiante
        promedio = computos[i].getAve();                      //Promedio de notas de cada estudiante
        letter = computos[i].letterGrade();                   //Nota promedio de cada estudiante
        ptr = computos[i].getGrades();                        //Puntero hacia las notas en arreglo de cada estudiante

        cout << "Las notas del estudiante " << i+1 << " son: " << endl;
        for (int i=0; i < 5; i++)
        {
            cout<<ptr[i]<<" ";                                 //Para mostrar las notas de cada estudiante
        }
        cout << endl;

        //Para mostrar promedio de cada estudiante
        cout<< "\nEl promedio del estudiante "<< i+1 << " es: " << promedio << endl;

        //Para mostrar Nota promedio de cada estudiante
        cout << "\nPor lo tanto, la nota del estudiante: " << i+1 << " es: " << letter << endl;
    }

    cout << endl;

    //Mostramos la nota top #1 individual entre todas las notas de todos los estudiantes
    cout << "De todas las notas entre " << size << " estudiantes, la nota mas alta fue: "
    << computos[size-1].getMaxOverallGrade(computos, size) << endl;
    return 0;
}