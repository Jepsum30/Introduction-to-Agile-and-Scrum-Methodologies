//Made By Daniqua Edwards//
#include <stdio.h>//added for c programming
//#include <iostream> excluded as code is c++ not c.
#include "menu.h" //added for c programming
#include "mainloop.h" //added for c programming
//using namespace std; excluded as code is C++ not C. 
// Function declarations
//void menu(); excluded as not needed. 
//void write();
//void read();
//void calc1();
//void calc2();
//void mainLoop();  // Main program loop

int main(void) { //added code for compiling main correctly josh note.
    int option;
    do {
        option = menu();
        if (option == 5) break;
        mainLoop(option);
        system("pause");
    } while (1);

    return 0;
}

// Main loop function to control the program
//void mainLoop() { exclude all as C++ code not C code
    //int choice;

   // do {
       // menu();  // Show the menu

       // cout << "Enter your choice: ";
        //cin >> choice;

        //switch (choice) {
            //case 1:
                //write();
                //break;
            //case 2:
               // read();
                //break;
            //case 3:
                //calc1();
                //break;
            //case 4:
                //calc2();
                //break;
            //case 5:
                //cout << "Exiting program..." << endl;
               // break;
            //default:
                //cout << "Invalid choice. Try again." << endl;
        //}

    //} while (choice != 5);
//} all code excluded as C++ code not C. 

// after compile on 5/2/2025 error out due to loop file not uploaded. 

