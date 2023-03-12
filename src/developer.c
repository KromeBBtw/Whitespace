#include <stdio.h>
#include <string.h>

typedef struct developer{
    char name[max_name_length];
    char alias[max_alias_length];
} developer;

int main(){

developer dev1;
developer dev2;

strcpy(dev1.name, "Malian");
strcpy(dev2.name, "Konrad");

strcpy(dev1.alias, "Student");
strcpy(dev2.alias, "Student");

return 0;
}
