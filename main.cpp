#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char array1[10][20];
    char array2[20];
    int numero=0;
    for(int i=0; i<10; i++){
        for(int k=0; k<20; k++){
            array1[i][k]=' ';
            array2[k]=' ';
        }
    }
    for(int i=0; i<10; i++){
        cin >> array1[i];
    }
    cin>>array2;
    if(posizione(array1, array2, numero)){
        cout << numero;
    }else{
        cout << "non presente";
    }
    return 0;
}
