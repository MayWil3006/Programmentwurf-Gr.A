#ifndef DEVELOPER_H_NHMPTW
#define DEVELOPER_H_NHMPTW

#define MAX_NAME 30
#define MAX_ALIAS 30

typedef struct {
    char name[MAX_NAME];
    char alias[MAX_ALIAS];
} Developer;

void create_new_developer(Developer *const developer, char name[], char alias[]); //function prototype to create a new object of type developer
void print_new_developer(Developer const *const developer); //funtion prototype to print the developers details

#endif DEVELOPER_H_NHMPTW 

