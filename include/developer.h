// include guards
#ifndef DEVELOPER_H_
#define DEVELOPER_H_

// define variables for static numbers to easily change and access them
#define MAX_NAMES_LENGTH 7
#define MAX_ALIAS_LENGTH 8

// create a struct to store the developers names and aliases
typedef struct developer
{
    char name[MAX_NAMES_LENGTH];
    char alias[MAX_ALIAS_LENGTH];
} developer;

// create a function to define the developers names and alias
void developer_init(developer *const developer, const char name[], const char alias[]);

#endif
