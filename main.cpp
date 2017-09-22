#include <cstdlib>              // Exit codes for main.
#include <iostream>             // std::cout

#include <soda.h>               // Include Soda class header (makes class declaration visible).
#include <vendingmachine.h>     // Include VendingMachine clase header (makes class declaration visible).
#include <ownersname.h>         //include ownersName class header

// This is a C++ style comment. Compiler will ignore all comments.


// The C++ program starts execution here.
int main()
{
    // Print a message at startup.

    std::cout << "Vending machine has been started" << std::endl << std::endl;

    //print owners name
    OwnersName ownersName("Henning");


    // Create vendingMachine object. Constructor will be called with no parameters.
    VendingMachine vendingMachine;
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();


    // Create a cola object. Constructor will be called with given parameters.
    Soda cola("Cola", 34, 4);
    Soda solo("Solo", 30, 6);
    Soda redbull("Red Bull", 42, 10);
    // We have a variable named cola with Soda as its data type.


    // Call the VendingMachine addType function with cola variable as parameter.
    vendingMachine.addType(cola);
    vendingMachine.addType(solo);
    vendingMachine.addType(redbull);

    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();

    //print menu
    vendingMachine.printMenu();


    // Print a message just before exiting.
    std::cout << "* * *" << std::endl;
    std::cout << "Vending machine shutting down." << std::endl << std::endl;


    // Signal "no error occured" to the world outside our small application.
    return EXIT_SUCCESS; // Could also return 0 but this is the most correct way...
}
