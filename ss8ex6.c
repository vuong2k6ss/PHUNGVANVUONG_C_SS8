#include <stdio.h>

int main(){
    int n = 3; 
    int num[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    printf("cac phan tu tren duong cheo chinh la :");
    for (int i=0;i<n;i++){
        printf("%d ", num[i][i]);  
        sum += num[i][i];  
    }
    printf("\ntong cac phan tu tren duong cheo chinh la: %d", sum);
    return 0;
}

