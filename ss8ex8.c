#include <stdio.h>

int main(){
    int n = 3; 
    int num[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    printf("cac phan tu tren duong cheo phu la :");
    for (int i=0;i<n;i++){
        printf("%d ", num[i][2-i]);  
        sum += num[i][2-i];  
    }
    printf("\ntong cac phan tu tren duong cheo phu la: %d", sum);
    return 0;
}

