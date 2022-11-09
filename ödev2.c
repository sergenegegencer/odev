#include <stdio.h>

int main(){
    int yas,kilo;
    float boy;
    printf("Yasinizi giriniz:");
    scanf("%d", &yas);
    printf("Boyunuzu giriniz:");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz:");
    scanf("%d", &kilo);

    float vki = kilo/(boy*boy);
    printf("Vucut Kitle Indeksi: %.2f\n", vki);

    if((13<=yas)&(yas<=17)&(18.50<=vki)&(vki<=24.99))
    printf("Kabul edildiniz.");
    else
    printf("Kabul edilmediniz.");

    return 0;
}