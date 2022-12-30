#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Include the main libnx system header, for Switch development
#include <switch.h>

int main(int argc, char* argv[]) {
    consoleInit(NULL);              // Initialize the console; redirect printf to the console

    printf("###########\n");       // Print Hello World to the console
    printf("  SWITCH\n");
    printf("###########\n");
    printf("\n\n D E V  K I T\n")
 
    while (appletMainLoop()) {      // while the application hasn't received an exit request...
        consoleUpdate(NULL);        // Update the screen
    }

    consoleExit(NULL);              // Clean up
    return 0;
}