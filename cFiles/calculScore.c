#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../hFiles/calculScore.h"
#include "../hFiles/utils.h"
void calculScoreMain() {
    // sequence 1
    char path_input1[200] ;
    get_path_from_user(path_input1, "input 1");
    char sequence1[10000] ;
    extract_sequence(path_input1, sequence1);
    printf("Sequence 1  = %s \n" , sequence1);
    // sequence 2
    char path_input2[200] ;
    get_path_from_user(path_input1, "input 2");
    char sequence2[10000] ;
    extract_sequence(path_input1, sequence2);
    printf("Sequence 2  = %s \n" , sequence2);

    // test longeur des deux séquences
    if (strlen(sequence1) != strlen(sequence2) ){
        printf("\033[0;31m Erreur: Les deux séquences ne sont pas égales \033[0m  \n") ;
        calculScoreMain() ;
        exit(EXIT_SUCCESS);
    } else{
        printf("\033[0;34m Les sequences ont bien la meme longueur \033[0m  \n");
    }
    // Calcul score
    char id[strlen(sequence1)];
    double egalite = 0 ;
    for (int i = 0 ; i < strlen(sequence1) ; i++){
        if (sequence1[i] == sequence2[i] ) {
            id[i] = sequence1[i];
            egalite++;
        }
        else {
            id[i] = '-';
        }
    }
    // affichage resultat
    printf("-id- : %s \n" , id);
    double res = egalite  / (double) strlen(sequence1) ;
    printf("Identité de séquence: %0.0f/%lu, soit %.2f %%"  , egalite , strlen(sequence1), res * 100 );

}