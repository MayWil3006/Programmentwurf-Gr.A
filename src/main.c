#include <stdio.h>
#include <stdlib.h>

#include "../include/developer.h"
#include "../include/developer_group.h"
#include "../include/group_logo.h"


int main(void) {
    
    int choice = 0;
    char input[30];
    int continue_loop = 1;

    DeveloperGroup developer_group;
    create_new_developer_group(&developer_group, AIRPLANE_LOGO);
    Developer harry = {"Harry", "MaxTechSupport"};
    Developer nico = {"Nico", "Masadian_14"};
    Developer maya = {"Maya", "Maya_123"};

    add_developer_to_group(&developer_group, &harry);
    add_developer_to_group(&developer_group, &nico);
    add_developer_to_group(&developer_group, &maya);

    while(continue_loop) {
        printf("========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\n");

        printf("Enter your choice: ");
        if (fgets(input, sizeof(input), stdin)) {
            choice = strtol(input, NULL, 10);
            }
        switch(choice) {
            case 1:
            for (unsigned int i = 0; i < MAX_DEVELOPERS; ++i) {
                if (developer_group.developer_list[i].name[0] != '\0') {
                    print_new_developer(&developer_group.developer_list[i]);
                }
            }
                break;
            case 2:
                print_group_logo(&developer_group);
                break;
            case 3:
                print_developer_group(&developer_group);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } 
    return 0;
}
    