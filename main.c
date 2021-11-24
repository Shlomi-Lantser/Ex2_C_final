#include <stdio.h>
#include "my_mat.h"

int main(){
    int mat[10][10];
    char tmp = getchar();
    while (tmp != 'D'){
        scanf("%s" , &tmp);
        if (tmp == 'A'){
            func1(mat);
        }else if (tmp == 'B'){
            int i;
            int j;
            scanf("%d" , &i);
            scanf("%d" , &j);
            func2(mat , i , j);
        }else if (tmp == 'C') {
            int i;
            int j;
            scanf("%d" , &i);
            scanf("%d" , &j);
            func3(mat , i , j);
        }
    }
}