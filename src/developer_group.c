#include <stdio.h>
#include <string.h>

// inlcuding the developer_group struct
#include "developer_group.h"

// logo_template from the header gets defined here
char logo_template[MAX_LOGO_LENGTH] = " __  __     __    \n/\\ \\_\\ \\   /\\ \\   \n\\ \\  __ \\  \\ \\ \\ \n \\ \\_\\ \\_\\  \\ \\_\\   \n  \\/_/\\/_/   \\/_/ \n";


// initializing function of developer_group_init 
// takes in from each developer their name and their alias
void developer_group_init(developer_group *developer_group, char dev1_name[], char dev1_alias[], char dev2_name[], char dev2_alias[])
{

   // checking if one of the given pointer is NULL
   // if so -> Errormessage and return without executing the function
   if(developer_group == NULL || dev1_name == NULL || dev2_name == NULL || dev1_alias == NULL || dev2_alias == NULL)
   {
      printf("ERROR : nullptr in developer_group_init found");
      return;
   }

   // initializes the developer from the developer_group with their names and alias
   // and getting stored in the developer array of developer_group
   developer_init(&developer_group->developer[0], dev1_name, dev1_alias);
   developer_init(&developer_group->developer[1], dev2_name, dev2_alias);
   
   // copy the logo of the group in the logo variable of developer_group
   strncpy(developer_group->logo, logo_template, MAX_LOGO_LENGTH);
}


// function to print the names and alias of the developer
void print_developer(developer developer[])
{
   // for loop through the developer array of developer_group and printing them to the terminal
   for(int i = 0; i < DEVELOPER_AMOUNT; i++)
   {
      printf("Developer %d ist : %s alias %s\n", i + 1, developer[i].name, developer[i].alias);
   }
}

// function to print the group_logo
void print_logo(developer_group *developer_group)
{
   // checking if the pointer is NULL
   // if so -> Error + return
   if(developer_group == NULL) 
   {
      printf("ERROR : nullptr in print_logo found");
      return;
   }

   // printing the logo to the terminal
   printf("%s", developer_group->logo);
}

