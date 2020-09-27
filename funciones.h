#ifndef FUNCIONES_H
#define FUNCIONES_H

int suma (int a, int b){
    return a + b;
}

int resta(int a, int b){
    if (b<0){
        return b;
    }
    if (a<0){
        return 0;
    }
    return a - b;
}

#endif