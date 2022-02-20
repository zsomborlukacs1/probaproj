//
// Created by Lukács Zsombor on 2022. 02. 19..
//

#include "functions.h"

int sum(int a, int b, int c){
    printf("\nA legnagyobb szam: ");
    if( (a > b) && (a > c) ){
        printf("%d", a);
    }
    else if(b > c){
        printf("%d", b);
    }
    else{
        printf("%d", c);
    }
    printf("\nA legkisebb szam: \n");
    if( (a < b) && (a < c) ){
        printf("%d", a);
    }
    else if(b < c){
        printf("%d", b);
    }
    else{
        printf("%d",c);
    }
}

int arrSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("A tomb elemeinek osszege %d\n", sum);
}

int arrMult(int *arr, int n){
    int x = 1;
    for(int i = 0; i < n; i++){
        x *= arr[i];
    }
    printf("A tomb elemeinek szorzata %d\n", x);
}

int arrDiv(int *arr, int n){
    float x = 1;
    for(int i = 0; i < n; i++){
        x /= arr[i];
    }
    printf("A tomb elemeinek atlaga %.2f\n", x);
}

int arrPar(int *arr, int n){
    int pcount = 0, prtcount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            pcount++;
        } else{
            prtcount++;
        }
    }
    printf("A tomb paros elemeinek szama %d\n", pcount);
    printf("A tomb paratlan elemeinek szama %d\n", prtcount);
}

int arrPoz(int *arr, int n){
    int pcount = 0, ncount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pcount++;
        } else{
            ncount++;
        }
    }
    printf("A tomb paros elemeinek szama %d\n", pcount);
    printf("A tomb paratlan elemeinek szama %d\n", ncount);
}

int arrFord(int *arr, int n){
    printf("A tomb forditott sorrendben:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}