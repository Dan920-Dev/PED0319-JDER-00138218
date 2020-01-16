#include <iostream> // Entrada y salida de datos
#include <string>   // Para cadenas o caracteres

using namespace std;

// Estructura que se utilizara para el registro
struct Enterprise{
    string name;
    int DUI;
    int yearC;
    int SalaryM;
};

void stimate(Enterprise* info, int size);

int main(){
    // Declarando variables
    Enterprise* Info;
    int size;
    cout << "Cuantos vendedores desea ingresar al registro: " << endl;
    cin >> size;
    Info = new Enterprise[size];
  

    for(int i = 0; i < size; i++){

        cout << "Ingrese los datos del vendedor " << i+1 <<endl;
         cout << "DUI: "; cin >> Info[i].DUI;  cin.ignore();
        cout << "Nombre completo: ";  getline(cin, Info[i].name); 
        cout << "Año en que fue contratado "; cin >> Info[i].yearC; 
        cout << "Salario Mensual "; cin >> Info[i].SalaryM; 
        cout << endl;
    } 

   stimate(Info, size);

    return 0;
}

void stimate(Enterprise* info, int size){
    int salaryT=0;
    int yearActual=2020; // Año actual como referencia
    int month=12; // 12 meses del año

    for(int i = 0; i < size; i++){
        cout << "Nombre del vendedor: " << info[i].name <<endl;
        cout << "DUI del vendedor: " << info[i].DUI <<endl;
        cout << "Año que fue contratado: " << info[i].yearC <<endl;
        cout << "Salario mensual: " << info[i].SalaryM <<endl;
         
        salaryT= (yearActual -info[i].yearC)*(month*info[i].SalaryM);
        cout << "Salario devengado en los " << yearActual- info[i].yearC << " años que a estado trabajando $" << salaryT;        
        cout << endl;
    }

    
}

