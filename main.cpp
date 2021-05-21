#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    int cont = 0, casos = 0, valor = 0, gastos = 0, num = 0;
    string fala;
    cin >> casos;
    while (cont < casos){
        cin >> fala;
        cin >> num;
        if (fala[0] == 'G'){
            gastos += num;
        }else{
            valor += num;
        }
        cont++;
    }
    if (gastos > valor){
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" <<endl;
    }else{
        cout << "A greve vai parar." <<endl;
    }
    return 0;
}
