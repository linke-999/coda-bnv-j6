#include <stdio.h>
#include "fonction.h"

int comparer_deux_chaine(char suite1[] , char suite2[]){


    int i1 = énumerer_chaine_caractere(suite1);

    int i2 = énumerer_chaine_caractere(suite2);


    if (i1 != i2){
        printf("les deux chaine ne sont pas les meme a cause de la taille \n");
        return(0);
    }
    else{
        while (i1 != 0)
        {
            i1--;
            if(suite1[i1] == suite2[i1]){
                continue;
            }
            else{
                printf("les deux chaine ne sont pas les meme a cause des lettre \n");
                return(0);
            }
            
        }
    
    }
    printf("les deux chaine sont les meme \n");
    return(1);
}