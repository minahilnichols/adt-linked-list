#include <stdio.h>
#include "header.h"
#include <stdlib.h>

/*Initalizes list*/
node * createList() {
    node * dummyNode;
    dummyNode = malloc(sizeof(node));
    dummyNode->nodeLength = 0;
    dummyNode->nodeValue = 0;
    
    return dummyNode;
}

/*Adds a node to the front of the list*/
void addFront(node * head, int i) {
    node * newNode;
    newNode = initNode(i);
    newNode->next = head->next;
    head->next = newNode;

}

/*Gets the value stored in the node at the front of the list*/
int getFront(node * head) {
    
    return head->next->nodeValue;
}

/*Removes the first node in the list*/
node * removeFront(node * head) {
    node * tempPtr;
    tempPtr = head->next;
    head->next = head->next->next;
    free(tempPtr);
    
    return tempPtr;

}

/*Prints the list*/
void printList(node * head) {
    node * N;
    N = head;
    N = N->next;
    while (N != NULL) {
        printf("%d ", N->nodeValue);
        N = N->next;
    }
}

/*Initializes a new node to add to the list*/
node * initNode(int i) {
    node * newNode;
    newNode = malloc(sizeof(node));
    newNode->nodeValue = i;
    newNode->next = NULL;
    
    return newNode;

}

/*Destroys the list*/
void destroy(node * head) {
    node * temp = head;
    while (temp != NULL) {
        temp = temp->next;
        free(head);
        head = temp;
    }
}