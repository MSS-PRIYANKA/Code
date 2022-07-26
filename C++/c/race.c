#include<stdio.h>
int main(){
    int place, n, i, j;
    int a[n][4], out[n];
    printf("Enter no of races ");
    scanf("%d", &n);
    printf("Enter distance \n");
    for(i=0;i<n;i++){
        for(j=0; j<4;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int temp;
    for (i = 0; i <n ; i++){
        int pos = a[i][0];
        printf("Before Sort");
        for(int l = 0; l < 4; l++ ){
            for (j = l+1; j <=3; j++) {
                if (a[l][j] > a[l][j+1]) {
                    temp = a[l][j];
                    a[l][j] = a[l][j+1];
                    a[l][j+1] = temp;
            }
            }
        }
        printf("After Sort");
        for(int k = 0; k < 4;k++){
            if(pos == a[i][k]){
                out[i] = k+1; 
            }
        }
    }
    printf("Positions ");
    for(i=0;i<4;i++){
        printf("%d\n", out[i]);
    }
}
