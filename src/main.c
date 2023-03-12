#include <stdio.h>
#include <string.h>

typedef struct developer_group{
    char name[7];
    char alias[8];
} developer_group;

int main(){

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
return 0;
}
