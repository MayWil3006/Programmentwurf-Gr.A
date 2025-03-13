#include <string.h>
#include <stdio.h>

#include "../include/developer.h"
#include "../include/developer_group.h"

void create_new_developer_group(DeveloperGroup *const developer_group, const char group_logo[]) //function prototype to create a new object of type developer group
{
    if(developer_group != NULL){
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            create_new_developer(&(developer_group->developer_list[i]), "", "");
        }  
        strncpy(developer_group->group_logo, group_logo, strlen(group_logo) + 1);
        developer_group->group_logo[strlen(group_logo)] = '\0'; // Ensure null-termination
    }
    else {
        printf("Pointer developer_group is NULL\n");
    }
}

void add_developer_to_group(DeveloperGroup *const developer_group, const Developer *const developer_ptr) //function prototype to add a developer to the developer group
{
    if(developer_group != NULL) {
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            if(developer_group->developer_list[i].name[0] == '\0') {
                create_new_developer(&(developer_group->developer_list[i]), developer_ptr->name, developer_ptr->alias);
                return;
            }
        }
        printf("Developer Group is full\n");
    }
    else {
        printf("Pointer developer_group is NULL\n");
    }
}

void print_developer_group(DeveloperGroup const *const developer_group)
{ 
    if(developer_group != NULL){
        //function prototype to print the developer group details
        printf("Developer Group: \n");
        printf("Group Logo:\n %s\n", developer_group->group_logo);
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            if(developer_group->developer_list[i].name[0] != '\0') {
            print_new_developer(&developer_group->developer_list[i]);
        }
    }
    }
    else {
        printf("Pointer developer_group is NULL\n");
    }
}

void print_group_logo(DeveloperGroup const *const developer_group) //function prototype to print the group logo
{
    if(developer_group != NULL) {
printf("%s\n", developer_group->group_logo);
    }
    else {
        printf("Pointer developer_group is NULL\n");
    }
}