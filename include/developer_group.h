#ifndef DEVELOPER_GROUP_H_
#define DEVELOPER_GROUP_H_

typedef struct developer_group{
    char logo[];
} developer_group;

void developer_group_init(developer_group *developer_group, char logo[]);

#endif
