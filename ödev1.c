#include <stdio.h>

int main(){
    int ales,yd,agno;
    printf("ALES puaninizi giriniz.");
    scanf("%d", &ales);
    printf("Yabanci dil puaninizi giriniz.");
    scanf("%d", &yd);
    printf("Mezuniyet ortalamanizi giriniz.");
    scanf("%d", &agno);

    float sp = ales*0.5+yd*0.25+agno*0.25;
    printf("Siralama puani: %.2f\n", sp);

    if(sp>60)
    printf("Siralamaya girdiniz.");
    else
    printf("Siralamaya giremediniz.");

    return 0;
}