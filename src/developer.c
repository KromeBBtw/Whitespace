#include <stdio.h>
#include <string.h>

//copies the developer struct to this file
#include "developer.h"



void developer_init(developer *developer, char name[], char alias[])
{
    if(sizeof(name) > max_name_length || sizeof(alias) > max_alias_length)
    {
        printf("Alias or Name is to big to be displayed");
        return;
    }

    strncpy(developer->name, name, sizeof(developer->name));
    strncpy(developer->alias, alias, sizeof(developer->alias));
}
