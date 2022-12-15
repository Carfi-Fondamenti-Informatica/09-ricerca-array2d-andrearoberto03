#include "lib.h"
bool posizione(char array1[10][20], char array2[20], int&numero){
    for(int i=0; i<10; i++){
        for(int k=0; k<20; k++){
            if(array2[k] != array1[i][k]){
                k=20;
            }else if(k==19){
                numero=i;
                return true;
            }
        }
    }return false;
}
