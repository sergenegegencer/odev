#include <stdio.h>

void main(){
    int k,n,s,a;
    printf("Bir sayi giriniz:");
    scanf("%d", &n);

    for(k=1;k<=n;k++){
        for(s=1;s<=k;s++)
            printf("#", s);
        printf("\n", k);
    }
}