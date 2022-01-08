#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../hFiles/traduction.h"

char prot( char car1 , char car2 , char car3 ) {
    if (car1 == 'G') {
        if (car2 == 'G') {
            if ((car3 == 'G') || (car3 == 'A') || (car3 == 'C') || (car3 == 'U')) {
                return ('G');
            }
        } else if (car2 == 'A') {
            if ((car3 == 'G') || (car3 == 'A')) {
                return ('E');
            } else if ((car3 == 'C') || (car3 == 'U')) {
                return ('D');
            }
        } else if (car2 == 'C') {
            return ('A');
        } else if (car2 == 'U') {
            return ('V');
        }
    } else if (car1 == 'A') {
        if (car2 == 'G') {
            if ((car3 == 'G' )|| (car3 == 'A')) {
                return ('R');
            } else if ((car3 == 'C' )|| (car3 == 'U')) {
                return ('S');
            }
        } else if (car2 == 'A') {
            if ((car3 == 'G') || (car3 == 'A')) {
                return ('K');
            } else if ((car3 == 'C' )|| (car3 == 'U')) {
                return ('N');
            }
        } else if (car2 == 'C') {
            return ('T');
        } else if (car2 == 'U') {
            if (car3 == 'G') {
                return ('M');
            } else {
                return ('I');
            }
        }
    } else if (car1 == 'U') {
        if (car2 == 'G') {
            if (car3 == 'G') {
                return ('W');
            } else if (car3 == 'A') {
                return ('*');
            } else if ((car3 == 'C') || (car3 == 'U')) {
                return ('C');
            }
        } else if (car2 == 'A') {
            if ((car3 == 'G') || (car3 == 'A')) {
                return ('*');
            } else if ((car3 == 'C') || (car3 == 'U')) {
                return ('Y');

            }
        } else if (car2 == 'C') {
            if ((car3 == 'G') || (car3 == 'A') || (car3 == 'C') || (car3 == 'U')) {
                return ('S');

            }
        } else if (car2 == 'U') {
            if ((car3 == 'G') || (car3 == 'A')) {
                return ('L');

            } else if ((car3 == 'C') || (car3 == 'U')) {
                return ('F');
            }
        }
    } else if (car1 == 'C') {
        if (car2 == 'G') {
            if ((car3 == 'G') || (car3 == 'A') || (car3 == 'C') || (car3 == 'U')) {
                return ('R');

            }
        } else if (car2 == 'A') {
            if ((car3 == 'G') || (car3 == 'A')) {
                return ('Q');
            } else if ((car3 == 'C') || (car3 == 'U')) {
                return ('H');

            }
        } else if (car2 == 'C') {
            if ((car3 == 'G') || (car3 == 'A') || (car3 == 'C') || (car3 == 'U')) {
                return ('P');

            }
        } else if (car2 == 'U') {
            if ((car3 == 'G') || (car3 == 'A') || (car3 == 'C') || (car3 == 'U')) {
                return ('L');
            }
        }

    }
}

void traducionMain (){

    char sequence[10000] ;
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    //recupertion fileName
    char filename[40];
    printf("veuillez saisir nom du fichier : \n");
    scanf("%s",filename);
    //definir filePth
    char path[40] = "/home/mohamed/Documents/GitHub/analyse/" ;
    //concatenation fileName & filePath
    char *filePath;
    filePath = malloc(strlen(filename)+40);
    strcpy(filePath, path);
    strcat(filePath, filename);
    // ouverture du fichier
    fp = fopen(filePath , "r");
    if (fp == NULL){
        printf("fichier introuvable");
        exit(EXIT_FAILURE);
    }
    // lecture du fichier ligne par ligne
    while ((read = getline(&line, &len, fp)) != -1) {
        //printf("Retrieved line of length %zu:\n", read);
        //printf("%s", line);
        // concatenation de toutes les lignes
        char lastLineChar = line[strlen(line)-1] ;
        if (lastLineChar == '\n'){
            line[strlen(line)-1] = '\0';
            strcat(sequence,line);
        } else {
            strcat(sequence,line);
        }
    }
    sequence[strlen(sequence)] = '\0';
    // printf(" sequence = %s \n" , sequence);

    fclose(fp);
    if (line)
        free(line);

    //remplacer T par U
    for (int i = 0 ; i < strlen(sequence); i++)
    {
        if ( sequence[i] == 'T' ){
            sequence[i] = 'U';
        }
    }

    // creation sequence proteine



}