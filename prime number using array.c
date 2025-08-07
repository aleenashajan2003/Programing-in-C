#include<stdio.h>
#include<math.h>
void main(void) {
	int i, j, n;
	printf("Enter the number n:\n");
	scanf("%d", &n);
    int arr[n];
    for(i = 0; i <= n; i++) {
        arr[i] = i+1;
    }
	for(i=1; i<floor(sqrt(n)); i++) {
		if(arr[i]!=0){
			for(j=1; j<floor(n/arr[i]); j++) {
				arr[i+arr[i]*j]=0;
			}
		}
	}
	for(i=0; i<n; i++) {
		if(arr[i]!=0) {
			printf("%d\t",arr[i]);
		}
	}
}
