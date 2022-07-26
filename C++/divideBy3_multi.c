#include <stdio.h>
#include<stdlib.h>
int main() {
	int n, i, j, count = 1;
	scanf("%d", &n);
    int a[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++){
            if((a[i][0] % 3 == 0) || (a[i][1] % 3)){
                printf("0\n");
                continue;
            }
            else if(((a[i][0] - a[i][1]) % 3 == 0) || ((a[i][1] - a[i][0]) % 3 == 0)){
                printf("%d\n", count);
            }
            else{
                count++;
        }
    }
}