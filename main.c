#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hFiles/calculScore.h"
#include "hFiles/transcription.h"
#include "hFiles/calculScorePolarite.h"
#include "hFiles/traduction.h"
#include "hFiles/utils.h"
#include "hFiles/seqCodante.h"
#include "hFiles/alignement.h"





int main() {


   char* variable;
    size_t read;
    size_t len = 0;
    printf("\033[0;34mVeuillez choisir la fonctionnalitée :\033[0m \n");
    printf("1- Recherche de la séquence codante de taille maximale \n");
    printf("2- Transcription d’une séquence ADN en séquence ARN\n");
    printf("3- Traduction d’une séquence codante en séquence protéique\n");
    printf("4- Calcul du score d’identité entre deux séquences\n");
    printf("5- Calcul du score de similarité de polarité entre deux séquences protéiques\n");
    printf("6- Recherche d’une séquence consensus à partir d’un alignement multiplen\n");
    printf("0- Quitter\n");
    printf("Votre choix :  \n");

    read = getline(&variable, (size_t *) &variable, stdin);
    variable[strlen(variable)-1] = '\0';

 switch(variable[0] )
    {
        case '1':
            seqCodanteMain();

            break;
        case '2':
            transcriptionMain();
            break;
        case '3':
            traducionMain();
            return 0 ;
        case '4':
            calculScoreMain();
            return 0 ;
        case '5':
            calculScorePolariteMain();
            return 0 ;
        case '6':
            alignementMain();
            return 0 ;
        default:
            return 0;
    }

    return 0;


}

