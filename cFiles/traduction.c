#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../hFiles/traduction.h"
#include "../hFiles/utils.h"

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

    printf(" ----------------------- Module Traduction --------------------- \n");
    // sequence
    char path_input[200] ;
    get_path_from_user(path_input, "input");
    char sequence[10000] ;
    extract_sequence(path_input, sequence);

    // creation sequence
    char seqProt[10000] ;
    seqProt[0] = 'M' ; //
    int seqProtLength = 1 ;
    for ( int  i = 3 ; i < strlen(sequence);i = i + 3) {
        seqProt[seqProtLength] = prot(sequence[i],sequence[i+1],sequence[i+2]);
        seqProtLength = seqProtLength + 1 ;
    }

    //exporter sequence
    char path_output[200] ;
    get_path_from_user(path_output, "output de proteine");
    save_sequence(path_output,seqProt);



}