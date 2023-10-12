//
//  main.c
//  diamondShape
//
//  Created by Eren Köse on 12.10.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int uzunluk=0;
    printf("Lutfen elmasın uzunluğunu girin (Tek sayı):");
    scanf("%d",&uzunluk);
    for (int i=0; i<=((uzunluk+1)/2);i++){ //bu bize tur sayimizi verdi
        for(int bosluk=((uzunluk+1)/2)-i;bosluk>0;bosluk--){ //bosluklari yazdirdik
            printf(" ");
        }
        for(int yildiz=0;yildiz<((2*i)-1);yildiz++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=((uzunluk+1)/2); i>0;i--){ //bu bize tur sayimizi verdi (bu kez ust kisimdan 1 eksik cunku ortadaki yildizlari tekrar yazdirmayacagiz
        for(int bosluk=((uzunluk+1)/2)-i;bosluk>=0;bosluk--){ //bosluklari yazdirdik
            printf(" ");
        }
        for(int yildiz=0;yildiz<((2*(i-1))-1);yildiz++){
            printf("*");
        }
        printf("\n");
    }
        return 0;
    }
