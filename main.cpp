#include <thread>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

unsigned t0,t1;

void funcion1(){
    int count = 1000000000;
    while (count > 0)
    {
        //cout << count << endl;
        count--;
    }
    
}

int main(int argc, char const *argv[])
{
    char key;
    cout << "M - Multihilo; P - Proceso central" << endl;
    cin >> key;

    t0 = clock();

    if (key == 'M')
    {
        thread nombre1(funcion1);
        thread nombre2(funcion1);
        nombre1.join();
        nombre2.join();
    }else if (key == 'P')
    {
        funcion1();
        funcion1();
    }else
    {
        cout << "Tecla no valida";
    }  
    
    t1 = clock();
    double time = (double(t1 -t0)/CLOCKS_PER_SEC);
    cout << "Tiempo de ejecucion: " << time << endl;

    return 0;
}