#include <stdio.h>
#include "fonction.h"

int main(void)
{
    char suite1[100];
    char suite2[100];

    printf("Entrez la premiere suite de lettres : ");
    scanf("%s", suite1);

    printf("Entrez la deuxieme suite de lettres : ");
    scanf("%s", suite2);

    int reponse = comparer_deux_chaine(suite1 , suite2);

    if(reponse == 1){
        printf("bravo tu est con");
    }
    else{
        printf("youpi tu est con");
    }
    return 0;
}
