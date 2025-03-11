#ifndef DEVELOPER_GROUP_H_NHMPTW
#define DEVELOPER_GROUP_H_NHMPTW

#include "developer.h"

#define MAX_DEVELOPERS 3
#define MAX_LOGO_SIZE 500

typedef struct {
    Developer developer_list[MAX_DEVELOPERS]; //array saves up to 3 developers
    char group_logo[MAX_LOGO_SIZE]; //saves the group logo
    int developer_count; //saves the number of developers in the group
} DeveloperGroup;

void create_new_developer_group(DeveloperGroup *const developer_group, const char group_logo[]); //function prototype to create a new object of type developer group

void add_developer_to_group(DeveloperGroup *const developer_group, const Developer *const developer); //function prototype to add a developer to the developer group

void print_developer_group(DeveloperGroup const *const developer_group); //function prototype to print the developer group details

void print_group_logo(DeveloperGroup const *const developer_group); //function prototype to print the group logo

//void print_whole_group(DeveloperGroup const *const developer_group); //function prototype to print the whole group

#endif DEVELOPER_H_NHMPTW