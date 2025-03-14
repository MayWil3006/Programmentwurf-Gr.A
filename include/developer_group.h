#ifndef DEVELOPER_GROUP_H_NHMPTW
#define DEVELOPER_GROUP_H_NHMPTW

/*
developer_group.h defines DeveloperGroup struct
and function prototypes
*/

#include "../include/developer.h"

#define MAX_DEVELOPERS 3 // Maximum number of developers in the group
#define MAX_LOGO_SIZE 700 // Maximum size for storing the group logo


//Struct stores information about a developer group
typedef struct {
    Developer developer_list[MAX_DEVELOPERS]; // Array saves up to 3 developers
    char group_logo[MAX_LOGO_SIZE]; // String to store the group logo
    int developer_count; //Saves the number of developers in the group
} DeveloperGroup;

// Function prototype to initialize a DeveloperGroup object
void create_new_developer_group(DeveloperGroup *const developer_group, const char group_logo[]); 

//Function prototype to add a developer to the developer group
void add_developer_to_group(DeveloperGroup *const developer_group, const Developer *const developer_ptr); 

//Function prototype to print the developer group details and the logo
void print_developer_group(DeveloperGroup const *const developer_group); 

//Function prototype to print the group logo
void print_group_logo(DeveloperGroup const *const developer_group); 

#endif //DEVELOPER_H_NHMPTW
