#include<stdio.h>
main()
{
    int a;
    printf("Welcome to Telephone Call Services..\n");
	printf("\nSelect an option:\n");
    printf("1 for Check phone history\n");
    printf("2 for Make a call\n");
	printf("3 for Check balance\n");
    printf("4 for End call\n");
	printf("5 for Exit\n");
	scanf("%d", &a);

        switch (a) {
            case 1: {
                int call;
                printf("Select a history in phone:\n");
                printf("1: Google history\n");
                printf("2: Youtube history\n");
                printf("3: instra history\n");
                scanf("%d", &call);

                switch (call) {
                    case 1:
                        printf("Select a google history\n");
                        break;

                    case 2:
                        printf("Select a youtube history \n");
                        break;

                    case 3:
                        printf("Select a instra history\n");
                      	break;

                    default:
                        printf("Invalid history\n");
                        break;
                }
                break;
            }

            case 2:
                printf("Make a call\n");
             	break;

            case 3:
                printf("Check balance in dail 123\n");
            	break;

            case 4:
                printf("End the calling\n");
              	break;

            case 5:
                printf("Exiting Telephone Call Services\n");
             	break;

            default:
                printf("Invalid option\n");
           
        }
    
}

