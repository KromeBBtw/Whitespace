#include <stdio.h>
#include <string.h>

// copies the developer struct to this file
#include "developer.h"

// developer init function to initialize a given developer with their name and alias
void developer_init(developer *const developer, const char name[], const char alias[])
{
    // checking if one of the pointer is NULL
    // if so display error message and return without execute the function
    if (developer == NULL || name == NULL || alias == NULL)
    {
        printf("ERROR : nullptr in developer_intit found");
        return;
    }

    // copy the name and alias via strncpy to the name and alias from the developer pointer
    strncpy(developer->name, name, MAX_NAMES_LENGTH);
    strncpy(developer->alias, alias, MAX_ALIAS_LENGTH);
}
