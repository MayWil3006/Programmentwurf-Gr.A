#include <stdio.h>
#include <string.h>

/*
developer.c defines functions to initialize
and print Developer struct
*/

#include "../include/developer.h"


//Function initializes the Developer struct with a name an alias
void create_new_developer(Developer *const developer_ptr, const char name[], const char alias[]) {
    if(developer_ptr != NULL) {
        //Copy the name into the Developer struct
        strncpy(developer_ptr->name, name, strlen(name) + 1); 
        developer_ptr->name[strlen(name)] = '\0'; //Ensure null-termination

        //Copy the alias into the Developer struct
        strncpy(developer_ptr->alias, alias, strlen(alias) + 1); 
        developer_ptr->alias[strlen(alias)] = '\0';
    }
    else {
        printf("Pointer developer_ptr is NULL\n"); //Error handling in case of a NULL pointer
    }   
}

//Function prints the details of a Developer
void print_new_developer(Developer const *const developer_ptr) {
    if(developer_ptr != NULL) {
        printf("====================================\n");
        printf("Developer: \n");
        printf("Name: %s\n", developer_ptr->name);
        printf("Alias: %s\n", developer_ptr->alias);
        printf("====================================\n");
    }
    else {
        printf("Pointer developer_ptr is NULL\n"); //Error handling in case of a NULL pointer
    }
}

//Function frees the memory of a developer
void free_developer(Developer *const developer_ptr) {
    if(developer_ptr != NULL) {
        developer_ptr->name[0] = '\0';
        developer_ptr->alias[0] = '\0';
    }
    else {
        printf("Pointer developer_ptr is NULL\n"); //Error handling in case of a NULL pointer
    }
}