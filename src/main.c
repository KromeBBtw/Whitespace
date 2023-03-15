#include <stdio.h>
#include <string.h>

//Including the developer struct
#include "developer_group.h"


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

developer Conrad, Malian;
developer_init(&Conrad, "Conrad", "crucey");
developer_init(&Malian, "Malian", "Krome");

developer_group dev_group;
developer_group_init(&dev_group, &Conrad, &Malian, "(*_*)");

print_developer_group(dev_group.developer);


//tests_end

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
