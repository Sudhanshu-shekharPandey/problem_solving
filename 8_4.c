#include<stdio.h>
void main(){
    int n,i=0;
    printf("Enter number\n");
    scanf("%d",&n);
    int k=n;
    while(n!=0){
        n=n/10;
        i++;
    }
    int A[i];
    n=k;
    for(int j=i-1;j>=0;j--){
        int last=n%10;
        A[j]=last;
        n=n/10;
    }
    int mid=(i-1)/2;
    int rightsum=0;
    int leftsum=0;
    for(int m=0;m<mid;m++){
        leftsum+=A[m];
        rightsum+=A[mid+m+1];
    }
    printf("%d is left sum\n",leftsum);
    printf("%d is right sum\n",rightsum);
    if(rightsum==leftsum){
        printf("Number is balanced\n");
    }
    else{
        printf("Number is not balanced\n");
    }
}
