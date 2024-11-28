#include <stdio.h>

int main(){
    int n;
    printf("nhap so nguyen:  ");
    scanf("%d", &n);
    int num[n][n];
    printf("nhap cac phan tu cho mang 2 chieu:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("phan tu tai num[%d][%d] la: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("ma tran vuong cua mang:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}

