#include <iostream>
#include <memory>
#include "student.h"

using namespace std;

int main()
{
    unique_ptr<Student> student = make_unique<Student>();
    student -> setName("Risto Reipas");
    student -> setStudentNumber(123);
    student -> setAverage(9.5);

    cout<<"Opiskelijan nimi: "<<student->getName()<<endl<<"Opiskelijanumero: "<<student->getStudentNumber()<<endl<<"Opiskelijan keskiarvo: "<<student->getAverage()<<endl;

    return 0;
}
