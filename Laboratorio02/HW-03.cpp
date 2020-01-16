#include <iostream> //Entrada y salida de datos
#include <cmath> // Para operaciones matematicas

using namespace std;

// Estructura para almacenar los valores del polinomio.
struct polynomial{
    int a;
    int b;
    int c;
};

void Evaluate(polynomial Equation);

int main(){
    polynomial Equ;
    
    cout << "Digite los valores del polinomio grado 2" << endl;
    cout << "Digite el valor de a: " <<endl; cin >> Equ.a;
    cout << "Digite el valor de b: " <<endl; cin >> Equ.b;
    cout << "Digite el valor de c: " <<endl;  cin >> Equ.c;

    cout << "Polinomio: "<< Equ.a <<"x^2+" << Equ.b << "x+" << Equ.c << endl;

    Evaluate(Equ);

    return 0;    
}

void Evaluate(polynomial Equation){
    float x1=0, x2=0, Discr=0;

    Discr=pow(Equation.b,2)-4*Equation.a*Equation.c;
    if(Discr < 0){
        cout << "Ya que el discriminante es menor que cero entonces la ecuación no tiene resolución real" << endl;
    }
    if(Discr == 0){
        cout << "Ya que el discriminante es cero entonces la ecuación de segundo grado tiene sólo una raíz " << endl;
        x1=-Equation.b/2*Equation.a;
        cout << "Raiz: " << x1 << endl;
    }
    if(Discr > 0){
        cout << "Ya que el discriminante es mayor que cero entonces la ecuación de segundo grado tiene dos raíces " << endl;
        x1=(-(Equation.b)+sqrt(pow(Equation.b,2)-4*Equation.a*Equation.c))/(2*Equation.a);
        x2=(-(Equation.b)-sqrt(pow(Equation.b,2)-4*Equation.a*Equation.c))/(2*Equation.a);
        cout << "Raiz 1: " << x1 << endl;
        cout << "Raiz 2: " << x2 << endl;   
    }

}