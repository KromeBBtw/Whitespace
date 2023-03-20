#include <stdio.h>
#include <string.h>

// Including the developer_group struct
#include "developer_group.h"

// controls the status of the application (running / exiting)
char loop_status = 1;

// will be holding the input of the user
// value is depending on the wanted action of the user
char input;

int main()
{
    // initialize and declare the dev_group variable
    // will be holding the each developer and their logo
    developer_group dev_group;

    // filling it with developer names and their alias
    developer_group_init(&dev_group, "Conrad", "crucey", "Malian", "Krome");

    // start of the visual interface
    // loop_status is true while the programm is running
    // if application gets closed => loop_status = false ("0") and the application closes

    while (loop_status)
    {
        // providing the visual interface for the user
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t\t[1]\n");
        printf("Print Group Logo \t\t[2]\n");
        printf("Print Group      \t\t[3]\n");
        printf("Exit             \t\t[4]\n");
        printf("========================\033[0m\n");

        // getting the wanted action from the user via scanf and storing it in input(int)
        printf("Enter your selection: ");
        scanf("%s", &input);

        // dependent of the input from the user ->  different results will get shown
        // input(string) gets casted back to int but now in ascii so 49 = 1, 50 = 2, ...
        switch ((int)input)
        {
                // case Input = 1 -> show the names and alias of the developer
            case 49:
                print_developer(dev_group.developer);
                break;

                // case Input = 2 -> shows the logo of the group
            case 50:
                print_logo(&dev_group);
                break;

                // case Input = 3 -> show the names/alais of the developer and the grouplogo
            case 51:
                print_developer(dev_group.developer);
                print_logo(&dev_group);
                break;

                // case Input = 4 -> ends the application with ending the loop with loop_status
            case 52:
                loop_status = 0;
                break;

                // case Input = nothing of the above -> giving the user the information that his
                // input was not valid
            default:
                printf("That was not a valid input!\n");
                break;
        }
    }

    // ending the application
    return 0;
}
