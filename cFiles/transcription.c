#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../hFiles/transcription.h"
#include "../hFiles/utils.h"
void test(char *variable) {
    printf("sdfsdf rty");
    printf("sdfsdf %s : " , variable);
}

void transcriptionMain () {
    // sequence
    char path_input[200] ;
    get_path_from_user(path_input, "input");
    char sequence[10000] ;
    extract_sequence(path_input, sequence);
    printf("Sequence = %s \n" , sequence);
    // verifier codon d'initiation
    char codonInitiation[4] = "";
        codonInitiation[0] = sequence[0];
        codonInitiation[1] = sequence[1];
        codonInitiation[2] = sequence[2];
        codonInitiation[3] = '\0';
        int value = strcmp(codonInitiation,"ATG");
        if (value != 0 ){
            printf("\033[0;31m Erreur: code d'initiation  \033[0m  \n") ;
            transcriptionMain();
            exit(EXIT_SUCCESS);
        }
    // test longeur sequence
    if (strlen(sequence) % 3 != 0 ){
        printf("\033[0;31m Erreur: la longueure n'est pas divisible par 3  \033[0m  \n") ;
        transcriptionMain();
        exit(EXIT_SUCCESS);
    }
    //remplacer T par U
    for (int i = 0 ; i < strlen(sequence); i++)
    {
        if ( sequence[i] == 'T' ){
            sequence[i] = 'U';
        }
    }
    //exporter sequence
    char path_output[200] ;
    get_path_from_user(path_output, "output");
    save_sequence(path_output,sequence);


}



