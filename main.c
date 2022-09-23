#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "list/six_letters.h"
#include "list/seven_letters.h"
#include "list/eight_letters.h"
#include "list/nine_letters.h"

int main(int argc, char *argv[])
{
    /*
    int rand;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        rand = rand()%5;
        
    }
    */
    printf("%s\n",array_six_letters[897]);
    printf("%s\n",array_seven_letters[897]);
    printf("%s\n",array_eight_letters[897]);
    printf("%s\n",array_nine_letters[897]);

    return 0;
}

