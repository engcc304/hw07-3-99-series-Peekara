#include <stdio.h>

int main(){
    
    int n,i,n1 = 0, sum = 0;
    printf("Enter number :\n");
    scanf("%d",&n);
    printf("Series = ");

    
    do{
        i++;
        n1 = n1 * 10 + 9 ;
        sum += n1;
        
        printf("%d", n1);
        
        if(i <= n-1 && i != n){
            printf(" + ");
        }

    } while (i < n);
    printf("\nSum = %d", sum);
    
    return 0;
}