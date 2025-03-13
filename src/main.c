#include <stdio.h>
#include <stdlib.h>

/*
main.c is the entry point of the program
*/

#include "../include/developer.h"
#include "../include/developer_group.h"
#include "../include/group_logo.h"


int main(void) {
    
    int choice = 0; //Stores the users choice
    char input[30]; //Buffer to store input
    int continue_loop = 1; //Flag to control menu loop

    
    //Creae a new DeveloperGroup and initialize it with logo
    DeveloperGroup developer_group;
    create_new_developer_group(&developer_group, AIRPLANE_LOGO);

    //Create individual Developer objects with a name and alias
    Developer harry = {"Harry", "Stewardess"};
    Developer nico = {"Nico", "FirstClassPassenger"};
    Developer maya = {"Maya", "Pilot"};

    //Add developers to DeveloperGroup
    add_developer_to_group(&developer_group, &harry);
    add_developer_to_group(&developer_group, &nico);
    add_developer_to_group(&developer_group, &maya);

    //Display a menu so the user can interact
    while(continue_loop) {
        printf("========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\n");

        printf("Enter your choice: "); //Get user input
        if (fgets(input, sizeof(input), stdin)) {
            choice = strtol(input, NULL, 10); //convert input to integer
            }

        //Process user input
        switch(choice) {

            case 1:
            //List all developers
            for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
                if (developer_group.developer_list[i].name[0] != '\0') {
                    print_new_developer(&developer_group.developer_list[i]);
                }
            }
                break;
            
            case 2:
            //Print the logo
                print_group_logo(&developer_group);
                break;
            
            case 3:
            //Print developer list and logo
                print_developer_group(&developer_group);
                break;
            
            case 4:
            //Exit the program
                printf("Exiting...\n");
                break;

            default:
            //Handle invalid choice
                printf("Invalid choice\n");
        }
    } 
    return 0;
}
    