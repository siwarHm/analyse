
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../hFiles/seqCodante.h"
#include "../hFiles/utils.h"

char* substring(char *destination, const char *source, int beg, int n)
{
    // extracts `n` characters from the source string starting from `beg` index
    // and copy them into the destination string
    while (n > 0)
    {
        *destination = *(source + beg);

        destination++;
        source++;
        n--;
    }

    // null terminate destination string
    *destination = '\0';

    // return the destination string
    return destination;
}

void seqCodanteMain() {

    char path_input[100000];
    get_path_from_user(path_input, "input");
//    /home/fatma/Downloads/analysefi/sequence (copy).fasta
    char sequence[10000];
    char seqPlusLongue[10000] = "";

    extract_sequence(path_input, sequence);
    sequence[strlen(sequence)] = '\0';
    printf("--------------------- sens normal -------------------- \n");
    int j  ;
    for (int i = 0; i < strlen(sequence) - 3; i = i + 1) {
        // verifier codon d'initiation
        if (sequence[i] == 'A' && sequence[i + 1] == 'T' && sequence[i + 2] == 'G') {
            //Parcourir la séquence 3 par 3 après avoir trouver le codon d'initiation
            for ( j = i + 3; j < strlen(sequence) - 2; j = j + 3) {
                // Vérifier l'appariti  on du T pour trouver le codon stop
                if (sequence[j] == 'T') {
                    //Vérifier le codon stop
                    if ((sequence[j + 1] == 'A' && sequence[j + 2] == 'G') ||
                        (sequence[j + 1] == 'G' && sequence[j + 2] == 'A') ||
                        (sequence[j + 1] == 'A' && sequence[j + 2] == 'A')) {
                        char seq[10000];
                        substring(seq,sequence,i,j+3-i);
                        printf(" Sequence trouvée: %s  \n" , seq);
                        i = j + 3 ;
                        if (strlen(seq)> strlen(seqPlusLongue)){
                            strcpy(seqPlusLongue, seq);
                        }

                        break;
                    }
                }
            }
        }


    }

    printf("--------------------- anti-sens -------------------- \n");
    //brin anti-sens
    char rev[10000];
    int t,  k = 0;

    t = strlen(sequence);

  //  rev[t] = '\0'; //le dernier caractère doit toujours être égale à '\0'.

    //inverser la séquence
    for (int i = t - 1; i >= 0; i--)
    {
        rev[k++] = sequence[i];
    }
    rev[strlen(rev)] = '\0';
 //  printf(" sequence normal = %s \n" ,sequence);
//    printf( " rev  = %s \n " , rev);

    for (int z = 0 ; z < strlen(rev); z++)
    {
        if ( rev[z] == 'T' ) {
            rev[z] = 'A';
        }
        else if ( rev[z] == 'C' ) {
            rev[z] = 'G';
        }
        else if ( rev[z] == 'A' ) {
            rev[z] = 'T';
        }
        else {
            rev[z] = 'C';
        }
    }
    rev[strlen(rev)] = '\0';

   // printf(" Sequence après replacement = %s \n", rev);

    int e;
    for (int f = 0; f < strlen(rev) - 3; f = f + 1) {
        // verifier codon d'initiation
        if (rev[f] == 'A' && rev[f + 1] == 'T' && rev[f + 2] == 'G') {
            //Parcourir la séquence 3 par 3 après avoir trouver le codon d'initiation
            for (e = f + 3; e < strlen(rev) - 2; e = e + 3) {
                // Vérifier l'apparition du T pour trouver le codon stop
                if (rev[e] == 'T') {
                    //Vérifier le codon stop
                    if ((rev[e + 1] == 'A' && rev[e + 2] == 'G') ||
                        (rev[e + 1] == 'G' && rev[e + 2] == 'A') ||
                        (rev[e + 1] == 'A' && rev[e + 2] == 'A')) {

                        char seq[10000];
                        substring(seq,rev,f,e+3-f);
                        printf(" Sequence trouvée: %s  \n" , seq);
                        f=e + 3;
                        if (strlen(seq)> strlen(seqPlusLongue)){
                            strcpy(seqPlusLongue, seq);
                        }
                        break;
                    }
                }
            }
        }
    }
    printf("-------------------------------------------------------------------\n");
    printf(" la sequence la plus longue = %s  \n" , seqPlusLongue);
    //exporter sequence
    char path_output[200] ;
    get_path_from_user(path_output, "output de la sequence la plus longue");
    save_sequence(path_output,seqPlusLongue);

}