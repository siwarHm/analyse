#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hFiles/calculScore.h"
#include "hFiles/transcription.h"
#include "hFiles/calculScorePolarite.h"
#include "hFiles/traduction.h"
#include "hFiles/utils.h"
#include "hFiles/seqCodante.h"





int main() {
    seqCodanteMain();
   // transcriptionMain();
   // traducionMain();
 /*   char path_input[200] ;
    get_path_from_user(path_input);
    char sequence[10000] ;
    extract_sequence(path_input, sequence);
    printf(" sequece = %s \n " , sequence);
    char path_output[200] ;
    get_path_from_user(path_output);
    printf(" sequeznce  = @%s@  \n " , sequence);
    printf(" path output  = @%s@  \n " , path_output);
    save_sequence(path_output,"output_transcription.txt",sequence);*/

    //test(path_input);
    //traducionMain();
    //calculScoreMain();
    //transcriptionMain();
    //calculScorePolariteMain();
    /*
    int variable ;
    printf("Veuillez choisir la fonctionnalitée : \n");
    printf("1- Recherche de la séquence codante de taille maximale \n");
    printf("2- Transcription d’une séquence ADN en séquence ARN\n");
    printf("0- Quitter\n");
    scanf("%d", &variable);

    switch(variable)
    {
        case 1:
            break;
        case 2:
            transcriptionMain2();
            break;
        case 0:
            return 0 ;
        default:
            //execute your code
            break;
    }
    return 0;
     */

}

