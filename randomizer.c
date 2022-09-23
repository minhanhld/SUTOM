#include "randomizer.h"

char* str_randomizer()
{
    srand(time(NULL));
    int random_list = rand()%4;
    char* string_result = malloc(sizeof(char) *(6+random_list));
    int random_string = rand()%900;

    switch(random_list)
    {
        case 0:
            string_result = array_six_letters(random_string);
            break;
        case 1:
            string_result = array_seven_letters(random_string);
            break;
        case 2:
            string_result = array_eight_letters(random_string);
            break;
        default:
            string_result = array_nine_letters(random_string);
            break;
    }

    return string_result;
}
