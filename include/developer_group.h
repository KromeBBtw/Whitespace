// include guards
#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

// include the developer.h library to use the structs and functions
#include "developer.h"

// define variables for static numbers to easily change and access them
#define MAX_LOGO_LENGTH 100
#define DEVELOPER_AMOUNT 2

// declare a variable which can be globally accessed for developer_group
extern char logo_template[];

// create a struct to store the group logo and developer
typedef struct developer_group
{
    char logo[MAX_LOGO_LENGTH];
    developer developer[DEVELOPER_AMOUNT];
} developer_group;

// function to define the developers and their aliases
void developer_group_init(developer_group *const developer_group, const char dev1_name[], const char dev1_alias[],
                          const char dev2_name[], const char dev2_alias[]);

// function to print the developers, which have been initialized by the developer_group_init function
void print_developer(const developer developer[]);

// function to print the group logo
void print_logo(developer_group const * const developer_group);

#endif
