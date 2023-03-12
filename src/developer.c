#include <stdio.h>
#include <string.h>

typedef struct developer_group{
    char name[7];
    char alias[8];
} developer_group;

int main(){

developer_group dev1;
developer_group dev2;

strcpy(dev1.name, "Malian");
strcpy(dev2.name, "Konrad");

strcpy(dev1.alias, "Student");
strcpy(dev2.alias, "Student");

return 0;
}
