#include <iostream>

float **rellenar(float** M, int, int);
void imprimeCabezas(float *punteroPrimerElemento, int, int, int);
void imprimeMatriz(float** M, int, int);


int main(void){
    std::cout << "Escriba un número del 3 al 11:\n" ;
    int n;
    std::cin >> n;
    if( n>= 3 && n<=11){
        float** M = new float* [n+2];
        for(int i=0;i<n+2;i++){
            M[i] = new float[n];
        }
        float** M1;
        M1 = rellenar(M, n+2, n);
        
        float *p = M1[0];
        float *p2 = M1[1];
        
        //imprimeCabezas(p, (int)(p2-p), n+2, n);
        
    }
    else{
        std::cout <<"Error. El número que usted ha ingresado no está entre 3 y 11."<<std::endl;
    }
    
    
    return 0;
}

float **rellenar(int **M, int nFilas, int nColumnas){
    float **resp = new float*[nFilas];
    for(int i=0; i<nFilas; i++){
        resp[i] = new float[nColumnas];
        for(int j=0; j<nColumnas; j++){
            resp[i][j]= i+j;
        }
    }
    imprimeMatriz(resp, nFilas, nColumnas);
    return resp;
}
/*
void imprimeCabezas(float *punteroPrimerElemento, int deltaAddr, int nFilas, int nColumnas){
    float suma = 0.0;
    for(int i=0; i<nFilas; i++){
        if(i == 0){
            for(int j=0; j<nColumnas; j++){
                std::cout<<"La primera fila es ["<<*(punteroPrimerElemento+j);
            }
            std::cout<<"]"<<std::endl;
        }
        suma += *(punteroPrimerElemento+i*deltaAddr);
    }
    std::cout << "Los elementos de la primera columna suman "<< suma << std::endl;
}*/

void imprimeMatriz(float **M, int nFilas, int nColumnas){
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            std::cout << M[i][j] <<"\t";
        }
        std::cout<<std::endl;
    }
}
