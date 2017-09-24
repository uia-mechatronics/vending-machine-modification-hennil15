#include "vendingmachine.h" // Includes the header file for this class for class declaration visibility.
#include <iostream>


// Definition of VendingMachine constructor.
VendingMachine::VendingMachine()
    : sodaTypes_()  // Initialization of sodaTypes_ vector. Explicit call to the constructor.

{
    //std::cout << "Vending machine object constructed!" << std::endl;
}


// Will be called when the object is deleted. Could do clean-up tasks here.
VendingMachine::~VendingMachine()
{
    // Do nothing.
}


// Add a Soda to the sodaTypes_ vector by using the vector push_back() method (function).
void VendingMachine::addType(Soda s)
{
    sodaTypes_.push_back(s);

}


// Print number of registered sodaTypes (types we added to the sodaTypes_ vector).
void VendingMachine::printInventory()
{
    std::cout << "Number of soda types registered: " << sodaTypes_.size() << std::endl << std::endl;
}




void VendingMachine::printMenu()
{
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Dagens meny er:" << std::endl << std::endl;
    for (uint i = 0; i<sodaTypes_.size(); ++i)
    {
        std::cout << sodaTypes_.at(i).name_ << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl << std::endl;
}


int VendingMachine::brusvalg()
{
    int a=0;
    std::cout << "Hvilken brus vil du ha?" << std::endl;
    std::cin >> a;

    std::cout << "Du har valgt " << sodaTypes_.at(a).name_ <<std::endl;
    std::cout << "Prisen er " << sodaTypes_.at(a).price_ << std::endl;

    return a;
}

bool VendingMachine::payment(int a)
{
    int pris = sodaTypes_.at(a).price_;
    int betaling = 0;
    int resterendeBelop = pris - betaling;
    int myntInnkast = 0;
    int veksel = 0;

    std::cout << "Vennligst betal for brusen med mynt av valoer 1,5,10 eller 20." << std::endl;

    while (resterendeBelop > 0)
    {
    std::cout << "Resterende belop: NOK " << resterendeBelop << " i mynt" << std::endl;
    std::cin >> myntInnkast;

    if (myntInnkast == 1 || myntInnkast == 5 || myntInnkast == 10 || myntInnkast == 20)
    {
    betaling = myntInnkast + betaling;
    resterendeBelop = pris - betaling;
    }
    else
    {
        std::cout << "Du har lagt paa en ugyldig valoer." << std::endl << "Aksepterer kun NOK 1, 5, 10 eller 20." << std::endl;
    }
    }

//std::cout << "                                              kommentar: ute av whilelokken" << std::endl;
    if (resterendeBelop == 0)
    {
        std::cout << "Du har lagt på eksakt beløp." << std::endl;
        std::cout << "Veksel 0" << std::endl;
        return true;
    }
    else if (resterendeBelop < pris)
    {
        veksel = -resterendeBelop;
        std::cout << veksel << " NOK tilbake i veksel." << std::endl;
        return true;
    }
    else
    {
        std::cout << "error i betalingsfunksjonen" << std::endl;
        return false;
    }

}
