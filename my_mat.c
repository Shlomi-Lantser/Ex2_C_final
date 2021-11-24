#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int min(int x , int y){
    if (x < y) return x;
    else return y;
}

int manipulate(int mat[10][10]){
    for (int k = 0; k <= 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                mat[i][j] = min(mat[i][j] , mat[i][k]+mat[k][j]);
            } 
        }
    }
    return 0;
}

void func1(int mat[10][10]){
    int a;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
         a = scanf("%d" , &a);
         mat[i][j] = a;
         }
        }
        manipulate(mat);
    }


int func2(int mat[10][10] ,int i , int j){
    if (mat[i][j] == 0){
        printf("False");
    }else {
        printf("True");
    }
    return 0;
}

int func3(int mat[10][10] ,int i , int j){
    if (mat[i][j] == 0){
        return -1;
    }else {
        return mat[i][j];
    }
}
