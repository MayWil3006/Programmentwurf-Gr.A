#ifndef DEVELOPER_H_NHMPTW
#define DEVELOPER_H_NHMPTW

/*
developer.h defines Developer struct
and function prototypes
*/

#define MAX_NAME 30 //Maximum length for developers name
#define MAX_ALIAS 30 //Maximum length for developers alias


//Struct stores developers name and alias as character arrays
typedef struct { 
    char name[MAX_NAME];
    char alias[MAX_ALIAS];
} Developer;

//Function prototype to initialize a developer struct with a given name and alias
void create_new_developer(Developer *const developer_ptr, const char name[], const char alias[]); 

//Function prototype to print the developers details
void print_new_developer(Developer const *const developer_ptr);

//Function prototype to free the memory of a developer
void free_developer(Developer *const developer_ptr);

#endif //DEVELOPER_H_NHMPTW 

