#include <iostream>
#include <string.h>
#include <math.h>

#define MAXLEN 20
#define LOW_BOUND 500
#define HIGH_BOUND 1000

using namespace std;

bool isInteger(char* headpt) {
    if (strlen(headpt) == 0) {
        return false;
    }
    for (int i = 0; i < strlen(headpt); i++) {
        if (*(headpt + i) > 57 || *(headpt + i) < 48) {
            return false;
        }
    }
    return true;
}

int s2d(char* headpt) {
    int num = 0;
    for (int i = 0; i < strlen(headpt); i++) {
        num = 10 * num + *(headpt + i) - 48;
    }
    return num;
}

int d2b(int di) {
    double bi = 0;
    for (int i = 0; di > 0; i ++) {
        bi += (di % 2) * pow(10, i);
        di /= 2;
    }
    return (int)bi;
}

int main() {
    char* raw_input;
    raw_input = (char*)malloc(sizeof(char) * MAXLEN);
    cout << "Please input a number between 500 and 1000" << endl;

    INPUT:
    cin.getline(raw_input, MAXLEN);
    cin.clear();
    cin.sync();

    if (isInteger(raw_input) == true) {
        int number = s2d(raw_input);
        if (number < LOW_BOUND || number > HIGH_BOUND) {
            cout << LOW_BOUND << "-" << HIGH_BOUND << "please." << endl;
            goto INPUT;
        } else {
            cout << "The number in benary is: " << d2b(number) << endl;
            free(raw_input);
            return 0;
        }
        

    } else {
        cout << "Not a positive integer. Please input again!" << endl;
        goto INPUT;
    }
}
