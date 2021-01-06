#include <stdio.h>
#define R 4.0
#define Pi 3.14

int main()
{
    char choice = 'l';          

    float R2;               
    float R3;             
    float result;

    R2 = R * R;
    R3 = R2 * R;


    switch (choice) {
    case 'l':
        result = 2 * Pi * R;
        break;
    case 's':
        result = Pi * R2;
        break;
    case 'v':
        result = 4 / 3 * Pi * R3;
        break;

    }

    return 0;
}