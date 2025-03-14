#include <string.h>
#include <stdio.h>

/*
developer_group.c defines functions to initialize
and print DeveloperGroup struct
*/

#include "../include/developer.h"
#include "../include/developer_group.h"


//Function initializes a DeveloperGroup object
void create_new_developer_group(DeveloperGroup *const developer_group, const char group_logo[])
{
    if(developer_group != NULL){
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            create_new_developer(&(developer_group->developer_list[i]), "", "");
        } 
        //Copy the group logo into the DeveloperGroup struct 
        strncpy(developer_group->group_logo, group_logo, strlen(group_logo) + 1); 
        developer_group->group_logo[strlen(group_logo)] = '\0'; // Ensure null-termination
    }
    else {
        printf("Pointer developer_group is NULL\n"); //Error handling in case of a NULL pointer
    }
}

//Function adds a developer to the DeveloperGroup
void add_developer_to_group(DeveloperGroup *const developer_group, const Developer *const developer_ptr)
{
    if(developer_group != NULL) {
        //Check if the developer group is full
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            if(developer_group->developer_list[i].name[0] == '\0') {
                create_new_developer(&(developer_group->developer_list[i]), developer_ptr->name, developer_ptr->alias);
                return; //Exit the function after adding the developer
            }
        }
        printf("Developer Group is full\n");
    }
    else {
        printf("Pointer developer_group is NULL\n"); //Error handling in case of a NULL pointer
    }
}

//Function prints details and group logo of the DeveloperGroup
void print_developer_group(DeveloperGroup const *const developer_group)
{ 
    if(developer_group != NULL){
        printf("Developer Group: \n");
        printf("Group Logo:\n %s\n", developer_group->group_logo); //print group logo
        for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
            if(developer_group->developer_list[i].name[0] != '\0') {
            print_new_developer(&developer_group->developer_list[i]); //print developer details
        }
    }
    }
    else {
        printf("Pointer developer_group is NULL\n"); //Error handling in case of a NULL pointer
    }
}

//Function prints only the group logo
void print_group_logo(DeveloperGroup const *const developer_group) 
{
    if(developer_group != NULL) {
       printf("%s\n", developer_group->group_logo); //print group logo
    }
    else {
        printf("Pointer developer_group is NULL\n"); //Error handling in case of NULL pointer
    }
}
