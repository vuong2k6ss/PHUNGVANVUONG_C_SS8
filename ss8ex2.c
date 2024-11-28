#include <stdio.h>

int main(){
	int n, i;
    int num[5] = {12, 14, 16, 18, 20};
    printf("nhap phan tu kiem tra: ");
    scanf("%d", &n);
    for(i=0;i<5;i++){
        if(num[i]==n){
            printf("Vi tri phan tu trong mang la %d\n", i);
            return 0;
        }
    }
    printf("phan tu khong ton tai trong mang\n");
    return 0;
}

