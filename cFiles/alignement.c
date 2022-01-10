#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../hFiles/calculScorePolarite.h"
#include "../hFiles/utils.h"
char charConsensus(char car , int occ , int l){
    if (occ == l ) {
        return car;
    } else if ((float) occ / (float)l >= 0.8){
        return '*';
    }else if ((float) occ / (float)l >= 0.6){
        return '-';
    } else {
        return ' ';
    }
}
void getMaxRepeatingElement(const char array[], int n,char  resultat[2])
{
    int i, j, count;
    char maxElement ;
    int maxCount = 0;
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j <= n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than
                maxCount, then update maxElement */
                if(count > maxCount)
                {
                    maxElement = array[j];
                    maxCount = count ;
                }
            }
        }
    }


   resultat[0] = maxElement;
    resultat[1] = (char) maxCount;

}

void creationSeqConsensus(char seqConsensus[10000] , char sequences[30][10000], int nbLine ,int seqLength){
    for (int i = 0 ; i <= seqLength -1 ; i++){
        char array[nbLine];
        for ( int j = 0 ; j <= nbLine ; j++){
            array[j] = sequences[j][i];
        }
        char  resultat[2];
        getMaxRepeatingElement(array,nbLine,resultat);

        char car =  charConsensus(resultat[0],resultat[1],nbLine+1);
        seqConsensus[i] =car;


    }
}
void addSeqToTable(char sequences[30][10000], char seq[10000] , int p){
    for (int i = 0 ; i <= strlen(seq);i++){
        sequences[p][i] = seq[i];
    }
}

void affichageSequences(char sequences[30][10000], int nbLine ,int seqLength){
    for (int i = 0 ; i <= nbLine ; i++){
        for ( int j = 0 ; j <= seqLength ; j++){
            printf("%c" , sequences[i][j]);
        }
        printf("\n");
    }
}


bool verifSeqADN(char sequence[10000] ){

    int i = 0 ;
    bool resultat = true;
    do {
       if (sequence[i] != 'A' && sequence[i] != 'T' && sequence[i] != 'C' && sequence[i] != 'G' && sequence[i] != '-' ){
           resultat = false ;
       }
       i++;
    } while ( resultat == true && i < strlen(sequence) ) ;
        return resultat ;

}


void alignementMain() {
    printf("-------------------------------------------------------------------------- \n");
    printf("|  Recherche d’une séquence consensus à partir d’un alignement multiplen  | \n");
    printf("-------------------------------------------------------------------------- \n");
    char sequences[30][10000];

    char path_input[200] ;
    get_path_from_user(path_input, "input");



    int nbLine = -1 ;
    char codonInitiation[4] = "";
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    size_t read;

    // ouverture du fichier
    fp = fopen(path_input , "r");
    if (fp == NULL){
        printf("\033[0;31mLe fichier introuvable \033[0m  \n" ) ;
        exit(EXIT_FAILURE);
    }
    // lecture du fichier ligne par ligne
    int seqLength = 0;
    while ((read = getline(&line, &len, fp)) != -1) {
        //printf("Retrieved line of length %zu:\n", read);
        nbLine++ ;
        if ( nbLine == 0 ){
            line[strlen(line)-1] = '\0';
            seqLength = (int) strlen(line) ;

            if (!verifSeqADN(line)){
                printf("\033[0;31mLe fichier contient des caractéres indesirables \033[0m  \n" ) ;
                alignementMain();
            }
            addSeqToTable(sequences,line , nbLine);
        } else {
            line[strlen(line)-1] = '\0';
            if (strlen(line)  != seqLength){
                printf("\033[0;31mLes sequence ne sont pas de meme tailles\033[0m  \n" ) ;
                alignementMain();
            }
            if (!verifSeqADN(line)){
                printf("\033[0;31mLe fichier contient des caractéres indesirables \033[0m  \n" ) ;
                alignementMain();
            }
            addSeqToTable(sequences,line , nbLine);
        }
    }
    //sequence[strlen(sequence)] = '\0';
    // printf(" sequence = %s \n" , sequence);

    fclose(fp);
    if (line)
        free(line);


    //affichage des sequences
   // affichageSequences(sequences,nbLine,seqLength);
   // printf("------------------------\n");



   // la creation de seqConsensus
    char seqConsensus[10000];
    creationSeqConsensus(seqConsensus,sequences,nbLine,seqLength);


    // affichage resultat
    printf("\033[0;34mLa sequence Consensus = \033[0m  \n" ) ;
    for (int i = 0 ; i <= strlen(seqConsensus) -1 ; i++){
        printf("%c" , seqConsensus[i]);
    }
    printf("\n");

    //exporter sequence
    char path_output[200] ;
    get_path_from_user(path_output, "output de la sequence Consensus" );
    save_sequence(path_output,seqConsensus);


}