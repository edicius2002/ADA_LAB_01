#include <iostream>

using namespace std;

float Addition(float a, float b){
    return a+b;
}
float Subtraction(float a, float b){
    return a-b;
}
float Multiplication(float a, float b){
    return a*b;
}
float Division(float a, float b){
    return a/b;
}

int main(){
    // User type to simplify the declaration
    typedef float (*lpfnOperation)(float, float);
    // CVector of pointer to functions
    lpfnOperation vpf[4] = {Addition,Subtraction,Multiplication, Division};
    float a, b, c; int opt;
    cout << "Ingrese operando a: " ;
    cin >> a;
    cout << "Ingrese operando b: ";
    cin >> b;
    cout << "Ingrese el nro de operacion: (0-Addition, 1-Subtraction, 2-Multiplication, 3-Division): ";
    cin >> opt;
    c = (*vpf[opt])(a, b);
    cout << "Resultado de la operacion: " << c;
}
