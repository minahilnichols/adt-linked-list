RUN:
    1) To compile, in terminal, type "make".
    2) To run, in terminal, type "./bin/mainrunnable" or type "make run".
    
INFORMATION:
    The program has a menu of options to choose from to test it. I have an option to run tests that I have come up with,
    some are defined below others I could not put into the program in order to compile.
    
TESTS:                                                                      RESULTS:                 FIX:
    1) If getFront or removeFront function is called on an empty list ->    seg fault          ->    check for NULL
    2) If destroy function is called more than once                   ->    program crashes    ->    destroy and exit together
    3) Under "My Tests" option if the integers in the
       array are too big or too small                                 ->    overflow           ->    can't take too big or too small numbers
    4) If any function is sent a bad pionter                          ->    seg faults         ->    keep track of pointers
    5) Checking for memory leaks using Valgrind                       ->    no leaks found     ->    no fix needed
    6) If double or float is sent                                     ->    number truncated   ->    cannot take decimals, send only int
    7) If characters are put into the input menu                      ->    loops back         ->    maybe a statement to let user know
    
EXTRA NOTES:
    1) I did not have createlist as an option in main because then I would have to keep track of more than one list.
    2) Under "My Tests" the too big negative and positive integers given are the max the compiler allows.
    3) When "My Tests" are run, it adds onto the list that you may test. So, the list now has extra numbers ones that I put in to test, and
    the ones you may put in. To avoid this, test the program yourself first and exit or destroy and start over.
