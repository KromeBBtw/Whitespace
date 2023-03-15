#include <stdio.h>
#include <string.h>

//Including the developer struct
#include "developer.h"

typedef struct developer_group{
    char name[7];
    char alias[8];
} developer_group;

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


/*
char sel = 0;

developer_group dev1;
developer_group dev2;

strcpy(dev1.name, "Malian");
strcpy(dev2.name, "Konrad");

strcpy(dev1.alias, "Student");
strcpy(dev2.alias, "Student");

 
printf("========================\
Choose your action:\
List Developers [1]\
Print Group Logo [2]\
Print Group [3]\
Exit [4]\n"
========================");


switch (scanf("%c", &sel);
{
	case1:
		printf("%d\n", developer1.name);
		printf("%d\n", developer1.alias);

		printf("%d\n", developer2.name);
		printf("%d\n", developer2.alian);
		break;
	case2:
		printf("...\n");
		break;
        case3:
                printf("...\n");
                break;
        case4:
                printf("...\n");
                break;  
        default:
                printf("...\n");
                break;
}
*/
return 0;
}
