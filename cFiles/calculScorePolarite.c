#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool apolaires(char car){
    if (car == 'F' || car == 'A' || car == 'L' || car == 'M' || car == 'W' || car == 'P' || car == 'G' ||
            car == 'V'  ){
        return true;
    } else {
        return false;
    }
}
void calculScorePolariteMain() {
    FILE * fp;
    FILE * fp2;
    char sequence[10000] ;
    char sequence2[10000] ;
    char codonInitiation[4] = "";
    int nbLine = 0;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
//recupertion fileName
    char filename[40];
    printf("veuillez saisir le nom du premier fichier : \n");
    scanf("%s",filename);
//definir filePth
    char path[40] = "/home/projet/Desktop/projet/" ;
//concatenation fileName & filePath
    char *filePath;
    filePath = malloc(strlen(filename)+40);
    strcpy(filePath, path);
    strcat(filePath, filename);
// ouverture du fichier
    fp = fopen(filePath , "r");
    if (fp == NULL){
        printf("fichier introuvable");
        calculScorePolariteMain();
    }

    char filename2[40];
    printf("veuillez saisir le nom du deuxième fichier : \n");
    scanf("%s",filename2);
//concatenation fileName & filePath
    char *filePath2;
    filePath2 = malloc(strlen(filename2) + 40);
    strcpy(filePath2, path);
    strcat(filePath2, filename2);
// ouverture du fichier
    fp2 = fopen(filePath2, "r");
    if (fp2 == NULL){
        printf("fichier introuvable");
        printf("veuillez saisir le nom du deuxième fichier : \n");
        scanf("%s",filename2);
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
    sequence[strlen(sequence)] = '\0';
    printf(" sequence = %s \n" , sequence);

    fclose(fp);

    while ((read = getline(&line, &len, fp2)) != -1) {
        //printf("Retrieved line of length %zu:\n", read);
        //printf("%s", line);
        nbLine++ ;
        // concatenation de toutes les lignes
        char lastLineChar = line[strlen(line)-1] ;
        if (lastLineChar == '\n'){
            line[strlen(line)-1] = '\0';
            strcat(sequence2,line);
        } else {
            strcat(sequence2,line);
        }
    }
    sequence2[strlen(sequence2)] = '\0';
    printf(" sequence2 = %s \n" , sequence2);

    fclose(fp2);


    if (line)
        free(line);
    // test longeur des deux séquences
    if (strlen(sequence) != strlen(sequence2) ){
        printf("Erreur: Les deux séquences ne sont pas égales \n");
        calculScorePolariteMain() ;
        exit(EXIT_SUCCESS);
    } else{
        printf("les sequences ont bien la meme longueur \n");
    }
    char res[strlen(sequence)];


    for (int i = 0 ; i < strlen(sequence) ; i++){
        if (apolaires(sequence[i]) && apolaires(sequence2[i]) ) {
            res[i] = '1';
        } else  if ( ! apolaires(sequence[i]) && ! apolaires(sequence2[i]) ) {
            res[i] = '0';
        }
        else {
            res[i] = '_';
        }
    }
    res[strlen(sequence)+1] = '\0';


    printf("RESULTAT: \n");
    printf("0:hydrophiles , 1:hydrophobes , -:différents\n");
    printf("%s\n",sequence);
    printf("%s\n",sequence2);
    printf("%s\n",res);

}