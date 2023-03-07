#include <stdio.h>
#include <string.h>


int main(){

char sel = 0;

struct developer_group
{
    char name;
    int alias;
};

struct developer_group developer1;
struct developer_group developer2;

strcpy(developer1.name, "Malian");
developer1.alias = "Student";

strcpy(developer2.name, "Conrad");
developer2.alias = "Student";
 
printf("========================\n
Choose your action:\n
List Developers [1]\n
Print Group Logo [2]\n
Print Group [3]\n
Exit [4]\n
========================");


switch (scanf("%c", &sel);
{
	case1:
		printf("%c\n", developer1.name);
		printf("%c\n", developer1.alias);

		printf("%c\n", developer2.name);
		printf("%c\n", developer2.alian);
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
return 0;
}
