#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUM 1000


int random_int(n) {
    srand((unsigned int)clock());
    
    return (int)rand() % n;
}

int main() {
    int A = random_int(MAX_NUM);
    int B = random_int(MAX_NUM);
    int C = random_int(MAX_NUM);

    int num;

    while (1) {
        num = 0;
        if (A == B) {
            num += 1;
        }
        if (A == C) {
            num += 2;
        }
        if (B == C) {
            num += 3;
        }
        
        
        
        if (num == 0) {
            break;
        } else if (num == 1) {
            int A = random_int(MAX_NUM);
            int B = random_int(MAX_NUM);
        } else if(num == 2) {
            int A = random_int(MAX_NUM);
            int C = random_int(MAX_NUM);
        } else if(num == 3) {
            int B = random_int(MAX_NUM);
            int C = random_int(MAX_NUM);
        } else if(num == 6) {
                int A = random_int(MAX_NUM);
                int B = random_int(MAX_NUM);
                int C = random_int(MAX_NUM);
        }
    }
    printf("%d,%d,%d, \n",A ,B ,C);

    if (A > B && A > C) {
        printf("A, %d", A);
    } else if(B > A && B > C) {
        printf("B, %d", B);
    } else {
        printf("C, %d", C);
    }
    return 0;
}
