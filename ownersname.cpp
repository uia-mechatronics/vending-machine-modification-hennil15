#include "ownersname.h"
#include <iostream>

OwnersName::OwnersName(std::string owner)
    :owner_(owner)
{
    std::cout << "-------------------------------------------------------" <<std::endl;
    std::cout << "Owner is " << owner << std::endl;
    std::cout << "-------------------------------------------------------" <<std::endl << std::endl;
}

