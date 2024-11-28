#include <stdio.h>

int main()
{
	int num[2][3] = {{1,2,3},{4,5,6}};
	int max = num[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(num[i][j]>max){
				max = num[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d", max);
	return 0;
}

