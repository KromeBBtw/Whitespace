// include guards
#ifndef DEVELOPER_H_
#define DEVELOPER_H_

// define variables for static numbers to easily change and access them
#define max_name_length 7
#define max_alias_length 8

// create a struct to store the developers names and aliases
typedef struct developer{
    char name[max_name_length];
    char alias[max_alias_length];
} developer;

// create a function to define the developers names and alias
void developer_init(developer *const developer, const char name[], const char alias[]);

#endif
