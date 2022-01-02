#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hFiles/transcription.h"
#include "hFiles/maximalLength.h"



int transcriptionMain2 () {


    char sequence[10000] ;
    int nbLine = 0 ;
    char codonInitiation[4] = "";
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    //recupertion fileName
    char filename[40];
    printf("veuillez saisir nom du fichier : \n");
    scanf("%s",filename);
    //definir filePth
    char path[40] = "/home/projet/Documents/GitHub/analyse/" ;
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
        nbLine++ ;
        // verifier codon d'initiation
        if (nbLine==1){
            codonInitiation[0] = line[0];
            codonInitiation[1] = line[1];
            codonInitiation[2] = line[2];
            codonInitiation[3] = '\0';
            int value = strcmp(codonInitiation,"ATG");
            if (value != 0 ){
                printf("erreur code d'initiation \n") ;
                transcriptionMain2();
                return 0;
            }
        }
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
    if (line)
        free(line);
    // test longeur sequence
    if (strlen(sequence) % 3 != 0 ){
        printf("Erreur: la longueure n'est pas divisible par 3  \n");
        transcriptionMain2();
        return 0 ;
    }
    //remplacer T par U
    for (int i = 0 ; i < strlen(sequence); i++)
    {
        if ( sequence[i] == 'T' ){
            sequence[i] = 'U';
        }
    }
    printf("------------------------------------------------------\n");
    //export du fichier
    FILE *output_transcription;
    output_transcription = fopen ("/home/projet/Documents/GitHub/analyse/output_transcription.txt","w+");
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

    printf("le fichier est bien enregistré");
    fclose(output_transcription);
    exit(EXIT_SUCCESS);


}





int calculscore () {
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
        calculscore();
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
        // verifier codon d'initiation
        if (nbLine==1){
            codonInitiation[0] = line[0];
            codonInitiation[1] = line[1];
            codonInitiation[2] = line[2];
            codonInitiation[3] = '\0';
            int value = strcmp(codonInitiation,"ATG");
            if (value != 0 ){
                printf("erreur code d'initiation \n") ;
                calculscore() ;
                return 0;
            }
        }
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
        // verifier codon d'initiation
        if (nbLine==1){
            codonInitiation[0] = line[0];
            codonInitiation[1] = line[1];
            codonInitiation[2] = line[2];
            codonInitiation[3] = '\0';
            int value = strcmp(codonInitiation,"ATG");
            if (value != 0 ){
                printf("erreur code d'initiation \n") ;
                calculscore() ;
                return 0;
            }
        }
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
        calculscore();
        return 0 ;
    } else{
        printf("les sequences ont bien la meme longueur \n");
    }
    char id[strlen(sequence)];

    double egalite = 0 ;
        for (int i = 0 ; i < strlen(sequence) ; i++){
            if (sequence[i] == sequence2[i] ) {
                id[i] = sequence[i];
                egalite++;
            }
            else {
                id[i] = '_';
            }
        }


    printf("-id- : %s \n" , id);



    double res = egalite  / (double) strlen(sequence) ;
    printf("Identité de séquence: %0.0f/%lu, soit %.2f %%"  , egalite , strlen(sequence), res * 100 );


}






int main() {

    calculscore();
   // transcriptionMain2();
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

