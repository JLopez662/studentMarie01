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

    Student computos[2];

    Student sociales("Jose");

//    cout<<computos.getName()<<computos.getYear()<<endl;
//    cout<<sociales.getName()<<sociales.getYear()<<endl;

    //computos.setNotas();
    computos[0].setGrades();
    double promedio=computos[0].getAve();

    cout<<promedio<<endl;

    const double *ptr=nullptr;
    //ptr=computos.getNotas();

    ptr=computos[0].getGrades();
    for (int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }

    return 0;
}