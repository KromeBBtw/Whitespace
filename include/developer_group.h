#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

#include "developer.h"

#define MAX_LOGO_LENGTH 200
#define DEVELOPER_AMOUNT 2


typedef struct developer_group{
    char logo[MAX_LOGO_LENGTH];
    developer developer[DEVELOPER_AMOUNT];
} developer_group;

void developer_group_init(developer_group *developer_group, char dev1_name[], char dev1_alias[], char dev2_name[], char dev2_alias[]);

void print_developer(developer developer[]);


#endif
