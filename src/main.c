#include <stdio.h>
#include <string.h>

//Including the developer struct
#include "developer_group.h"

char loop_status = 1;
int input = 0;

int main(){

// ---------------------------------------------------------------------------------

//when program starts
// -> show Interface while choice option (List Developer, Print Goup Logo, Print Group, Exit)

//init developer_group with name and alias of each and the group logo

//case List Developer 
        //print name and alias of each developer on terminal

//case Print Group Logo
        //print the logo in developer_group on the teriminal

//case Print Group
        //print List Developer and Group Logo

//case Exit
        //close the application (delete all memory)

// ---------------------------------------------------------------------------------
//tests

developer_group dev_group;
developer_group_init(&dev_group,"Conrad", "crucey", "Malian", "Krome");

print_developer(dev_group.developer);

    while (loop_status)
    {
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t\t[1]\n");
        printf("Print Group Logo \t\t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t[4]\n");
        printf("========================\033[0m\n");

        printf("Enter your selection: ");
        scanf("%d", &input);

        switch (input)
        {
            case 1:
                print_developer(dev_group.developer);
                break;
            case 2:
                print_logo(&dev_group);
                break;
            case 3:
                print_developer(dev_group.developer);
                print_logo(&dev_group);
                break;
            case 4:
                loop_status = 0;
                break;
            default:
                printf("That was not a valid input!\n");
                break;
        }
    }
return 0;
}
