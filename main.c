#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    ///1. feladat
    int a, b, c;
    printf("Irj be harom szamot\n");
    scanf("%d%d%d", &a, &b, &c);
    sum(a, b, c);
    ///2.feladat
    int n;
    printf("Hany eleme legyen a tombnek?\n");
    scanf("%d", &n);
    int *arr;
    arr = (int*) malloc(sizeof n*sizeof (int));
    printf("Ird be a tomb elemeit\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    arrSum(arr, n);
    arrMult(arr, n);
    arrDiv(arr, n);
    ///3. feladat
    arrPar(arr, n);
    arrPoz(arr, n);
    ///4.feladat
    arrFord(arr, n);
    return 0;
}
