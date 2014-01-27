struct listNode {
	int nodeLength;
	int nodeValue;
	struct listNode * next;
};

typedef struct listNode node;


/* Preconditions: None.
Postconditions: A new list is created and is empty. */
node * createList();

/* Preconditions: An initalized list is available. The element as the parameter is of correct type for the list.
Postconditions: The element is added to the front of the list. The list is increased by one. The head of the list pointer is set to be pointed at the new element. */
void addFront(node * head, int i);

/* Preconditions: List must not be empty.
Postconditions: None. */
int getFront();

/* Preconditions: A non-empty list is available.
Postconditions: The first element of the list is removed, list is decreased in size by one, the removed element is returned.*/
node * removeFront();

/* Preconditions: None
Postconditions: None */
void printList(node * head);

/* Preconditions: The element as the parameter is of correct type for list.
Postconditions: Adds value to the pointed node. */
node * initNode(int i);

/* Preconditions: A list exists.
Postconditions: The list is destroyed. */
void destroy();
