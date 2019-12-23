/*
    By Eric_Jin
    Created in Oct27 2019
    
    PROBLEM: WHEN THE INPUT STRING IS VERY LONG, THERE'S A PERTENCIAL DANGER OF SEGMENTATION FALT AND BUFFER OVERFLOW!!
 */




#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define NAMELENGTH 20
#define NUMBERLENGTH 20

#define HI 1000
#define LO 500

bool isInt(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (*(str + i) < 48 || *(str + i) > 57) {
            return 0;
        }
    }
    return 1;
}

/*
=======================================
GCC ON WINDOWS HAS A PROBLEM ABOUT POW FUNCTION. THE RETURNED VALUE HAS TO BE STORED IN DOUBLE TYPE, OTHERVISE, MAYBE "REALVALUE - 1"
=======================================
*/

int s2d(char* str) {

    //int num = 0;
    double num = 0;
    // printf("INIT_NUM %d", num);
    for (int i = 0; i < strlen(str); i++) {
        // printf("power %d", strlen(str) - 1 - i);
        num += (*(str + i) - 48) * pow(10, strlen(str) - 1 - i);
        // printf("index %d: ", i);
        // printf("num %d", num);
        
    }
    return (int)num;
}

int d2b(int di) {
    double bi = 0;
    for (int i = 0; di > 0; i ++) {
        bi += (di % 2) * pow(10, i);
        di /= 2;
    }
    return (int)bi;
}

struct player {
    char* name;
    int number;
};


int main() {

    struct player A;
    A.name = (char*)malloc(sizeof(char) * (NAMELENGTH + 1));

    struct player B;
    B.name = (char*)malloc(sizeof(char) * (NAMELENGTH + 1));

    char* numstring;
    numstring = (char*)malloc(sizeof(char) * (NUMBERLENGTH + 1));

    printf("\nenter A name\n");
    scanf ("%s", A.name);

    A_BEGIN:
    printf("\nenter A number\n");
    scanf ("%s", numstring);

    if (isInt(numstring) == 1) {
        A.number = s2d(numstring);
        if (A.number > HI || A.number < LO) {
            printf("%d ~ %d, please", LO, HI);
            goto A_BEGIN;
        }
    } else {
        printf("it's not a positive integer");
        goto A_BEGIN;
    }

    printf("\nenter B name\n");
    scanf ("%s", B.name);
    if (strcmp(A.name, B.name) == 0) {
        printf("WARNING: two players have same name: %s", A.name);
    }
    B_BEGIN:
    printf("\nenter B number\n");
    scanf ("%s", numstring);
    if (isInt(numstring) == 1) {
        B.number = s2d(numstring);
        if (B.number > HI || B.number < LO) {
            printf("%d ~ %d, please", LO, HI);
            goto B_BEGIN;
        }
    } else {
        printf("it's not a positive integer");
        goto B_BEGIN;
    }

    free(numstring);

    if (A.number == B.number) {
        printf("\n%s equal %s number: %d\n", A.name, B.name, A.number);
        printf("\nNOONEWIN\n");
        printf("WINNER_BINARY: %d", d2b(A.number));
    } else if(A.number > B.number) {
        printf("\n%s (%d) bigger than %s (%d)\n", A.name, A.number, B.name, B.number);
        printf("\n%sWIN\n", A.name);
        printf("WINNER_BINARY: %d", d2b(A.number));
    } else {
        printf("\n%s (%d) smaller than %s (%d)\n", A.name, A.number, B.name, B.number);
        printf("\n%sWIN\n", B.name);
        printf("WINNER_BINARY: %d", d2b(B.number));
    }

    free(A.name);
    free(B.name);

    return 0;
}