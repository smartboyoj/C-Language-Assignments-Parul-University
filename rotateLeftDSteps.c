#include<stdio.h>

void rotateArray(int arr[], int n, int d) {
  int i, j, temp;
  for (i = 0; i < d; i++) {
    temp = arr[0];
    for (j = 0; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[n - 1] = temp;
  }
}

int main(){
    int N,arr[20],D,i,temp;
    printf("No. of numbers in arr (N < 20) : ");
    scanf("%d",&N);

    // Taking array input
    for(i = 0;i < N;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("How many steps to rotate(+ve) : ");
    scanf("%d",&D);

    // Rotating array to D steps
    rotateArray(arr,N,D);

    // Print New Array
    printf("New Array : \n");
    for(i = 0;i < N;i++)
        printf(" %d ",arr[i]);
    printf("\n");

    return 0;
    
}