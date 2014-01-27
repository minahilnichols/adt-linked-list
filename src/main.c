#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main () {
    
    int menu = 0;
    int input = 0;
    node * list; 
    char c;
    
    list = createList(); 
    
    while (menu != 6) {
    
        printf("\nWhat would you like to test?\n");
        printf("\n[1] Add Front\n");
        printf("[2] Get Front\n");
        printf("[3] Remove Front\n");
        printf("[4] My Tests\n");
        printf("[5] Destroy List\n");
        printf("[6] Exit\n");
        scanf("%d", &menu);

        if (menu > 6 || menu < 1)
            while((c = getchar()) != '\n' && c != EOF); /*cleans input buffer, incase characters are input*/
            
        if (menu == 1) {
            
            printf("\nPlease Enter an Integer:");
            scanf("%d", &input);
            
            addFront(list, input);  /*returns users input to function to add to the list*/
            
            printf("Current List:");
            printList(list);        /*List printed everytime inorder for user to keep track*/
        
        }
        
        if (menu == 2) {
            
            printf("Front Value: %d", getFront(list));  /*gets value from function and prints it to screen*/
            
            printf("\nCurrent List:");
            printList(list);  
        
        }
        
        if (menu == 3) {
        
            removeFront(list);  /*calls function and sends list to remove first*/
            
            printf("Current List:");
            printList(list);
        
        }
        
        if (menu == 4) {
            
            /*my tests, I have tested very large and very small numbers in this array*/
            int testData[8] = {-456789123, 2, 0, 4, 1, 9, 9, 2096335345}; /*Given Data*/
            int arrayLength;
            int i;
            int testAddFront;
    
            arrayLength = sizeof(testData) / sizeof(int); /*Determines arraylength*/
        
            for (i=0; i<arrayLength; i++) {
                addFront(list, testData[i]);    /*Sends data to the addFront function*/ 
            }
            
            printf("\nAfter sending testData:\n");
            printList(list);
            
            getFront(list);
            printf("\n\nAfter getFront:\n");
            printf("%d", getFront(list));
            
            removeFront(list);
            printf("\n\nAfter removeFront:\n");
            printList(list);
            
            testAddFront = 999999;
            addFront(list, testAddFront);
            printf("\n\nAfter addFront:\n");
            printList(list);
        }
        
        if (menu == 5) {
        
            destroy(list); /*destroys list and frees memory*/
        
        }
        
        if (menu == 6) {
        
            break;  /*breaks out and ends program*/
            
        }
    }
    
    return 0;
}
