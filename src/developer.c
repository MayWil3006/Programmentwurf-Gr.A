#include <stdio.h>
#include <string.h>

#include "../include/developer.h"


/*
function initializes the developer struct with the name and alias
*/

void create_new_developer(Developer *const developer_ptr, const char name[], const char alias[]) { //function definition: creates new developer
    if(developer_ptr != NULL) {
        strncpy(developer_ptr->name, name, strlen(name) + 1); //kopiert den String name in developer_ptr->name
        developer_ptr->name[strlen(name)] = '\0'; //setzt letztes Zeichen auf 0 um string zu beenden

        strncpy(developer_ptr->alias, alias, strlen(alias) + 1);
        developer_ptr->alias[strlen(alias)] = '\0';
    }
    else {
        printf("Pointer developer_ptr is NULL\n");
    }
    
}
    /*Developer developer;
    strncpy(developer.name, name, sizeof(developer.name) - 1);
    developer.name[sizeof(developer.name) - 1] = '\0';

    strncpy(developer.alias, alias, sizeof(developer.alias) - 1);
    developer.alias[sizeof(developer.alias) - 1] = '\0';*/

    //return developer;

void print_new_developer(Developer const *const developer_ptr) { //function definition: prints developer's name and alias
    if(developer_ptr != NULL) {
        printf("====================================\n");
        printf("Developer: \n");
        printf("Name: %s\n", developer_ptr->name);
        printf("Alias: %s\n", developer_ptr->alias);
        printf("====================================\n");
    }
    else {
        printf("Pointer developer_ptr is NULL\n");
    }
}