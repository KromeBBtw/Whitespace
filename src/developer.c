#include <stdio.h>
#include <string.h>

//copies the developer struct to this file
#include "developer.h"



void developer_init(developer *developer, char name[], char alias[])
{
    if(developer == NULL || name == NULL || alias == NULL)
    {
        printf("ERROR : nullptr in developer_intit found");
        return;
    }

    strncpy(developer->name, name, sizeof(developer->name));
    strncpy(developer->alias, alias, sizeof(developer->alias));
}
