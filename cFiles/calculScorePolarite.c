#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../hFiles/calculScorePolarite.h"
#include "../hFiles/utils.h"

bool apolaires(char car){
    if (car == 'F' || car == 'A' || car == 'L' || car == 'M' || car == 'W' || car == 'P' || car == 'G' ||
            car == 'V'  ){
        return true;
    } else {
        return false;
    }
}
void calculScorePolariteMain() {
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
        calculScorePolariteMain() ;
        exit(EXIT_SUCCESS);
    } else{
        printf("\033[0;34m Les sequences ont bien la meme longueur \033[0m  \n");
    }
    // Calcul score de similarité de polarité
    char res[strlen(sequence1)];

    for (int i = 0 ; i < strlen(sequence1) ; i++){

        if (apolaires(sequence1[i]) && apolaires(sequence2[i]) ) {
            res[i] = '1';
        } else  if ( ! apolaires(sequence1[i]) && ! apolaires(sequence2[i]) ) {
            res[i] = '0';
        }
        else {
            res[i] = '-';
        }
    }
    res[strlen(sequence1)] = '\0';
    //affichage resultat
    printf("RESULTAT: \n");
    printf("0:hydrophiles , 1:hydrophobes , -:différents\n");
    printf("%s\n",sequence1);
    printf("%s\n",sequence2);
    printf("%s\n",res);

}