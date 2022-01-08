#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../hFiles/utils.h"
void get_path_from_user( char *  path_input , const char type[10]){
    printf("veuillez saisir le path de fichier %s : \n" , type);
    ssize_t read;
    size_t len = 0;
    read = getline(&path_input, (size_t *) &path_input, stdin);
    path_input[strlen(path_input)-1] = '\0';
}



void extract_sequence(const char* path_input, char* sequence) {
    int nbLine = 0 ;
    char codonInitiation[4] = "";
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    // ouverture du fichier
    fp = fopen(path_input , "r");
    if (fp == NULL){
        printf("fichier introuvable");
        exit(EXIT_FAILURE);
    }
    // lecture du fichier ligne par ligne
    while ((read = getline(&line, &len, fp)) != -1) {
        //printf("Retrieved line of length %zu:\n", read);
        //printf("%s", line);
        nbLine++ ;

        // concatenation de toutes les lignes
        char lastLineChar = line[strlen(line)-1] ;
        if (lastLineChar == '\n'){
            line[strlen(line)-1] = '\0';
            strcat(sequence,line);
        } else {
            strcat(sequence,line);
        }
    }
    //sequence[strlen(sequence)] = '\0';
    // printf(" sequence = %s \n" , sequence);

    fclose(fp);
    if (line)
        free(line);


}


void save_sequence(const char* path_output  , char* sequence) {

    //export du fichier
    FILE *output_transcription;

    output_transcription = fopen (path_output, "w+");
    char ligne[82];
    for (int i=0;i< strlen(sequence);i++)
    {
        for (int j=0;j<80;j++)
        {
            ligne[j] = sequence[i+j];
        }
        ligne[80] = '\n';
        fprintf (output_transcription,"%s",ligne);
        i = i +79 ;
    }

    printf("\033[0;31m Le fichier est bien exporté \033[0m  \n" ) ;
    fclose(output_transcription);
    exit(EXIT_SUCCESS);
}