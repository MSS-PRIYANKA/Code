#include <stdio.h>

int main() {
	int n, k,a[n], sum1=0, sum_1=0;
	int i, j, l;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	    scanf("%d", &k);
	    for(j=0;j<k;j++){
	        scanf("%d", &a[j]);
	    }
	    for(l=0;l<n;l++){
	        if(a[l] == 1){
	            sum1 += 1;
	        }
	        else{
	            sum_1 += 1;
	        }
	    }
	    if(sum1 == sum_1){
	        printf("0");
	        printf("\n");
	    }
	    else if(sum1 > sum_1){
	        if((sum1 - sum_1) % 2 == 0){
	            int count = (sum1 - sum_1)%2;
	            printf("%d", count/2);
	            printf("\n");
	        }
	    }
	    else if(sum_1 > sum1){
	        if((sum_1 - sum1) % 2 == 0){
	            int count = (sum_1 - sum1)%2;
	            printf("%d", count / 2);
	            printf("\n");
	        }
	    }
	    else{
	        printf("-1");
	        printf("\n");
	    }
	}
	return 0;
}

