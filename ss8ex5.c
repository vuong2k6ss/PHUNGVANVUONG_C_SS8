#include <stdio.h>

int main() {
    int num[3][3] = {{1, 2, 1},{2, 3, 2},{3, 4, 3}};
    int sum = 0;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (i==0 || i==2 || j==0 || j==2){
                sum += num[i][j];
            }
        }
    }
    printf("ong cac phan tu tren duong bien la : %d", sum);
    return 0;
}

