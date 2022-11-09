#include <stdio.h>

void main(){
    int k,n;
    float sonuc = 0;
    printf("Bir sayi giriniz:");
    scanf("%d", &n);

    for(k=1;k<=n;k++)
    sonuc += (k*k+1.23)/(k-0.25);
    printf("%f", sonuc);
    
}