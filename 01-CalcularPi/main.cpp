#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0, signo = 1, denominador = 1; 
    int repeticiones = 0;     

    while (abs(pi - 3.141592/4) > 0.0000001) {
        pi += signo / denominador; 
        signo *= -1;             
        denominador += 2;        
        repeticiones++;            
    }

    pi *= 4;
    cout << "Valor aproximado de pi: " << setprecision (6) << fixed << pi << endl;
    cout << "Cantidad de repeticiones: " << repeticiones << endl;

return 0;
}
