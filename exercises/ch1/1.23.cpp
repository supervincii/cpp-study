#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, new_item;
    int transaction_count = 0;

    std::cin >> item;
    ++transaction_count;

    while (std::cin >> new_item) {
	if (new_item.isbn() == item.isbn())
	    ++transaction_count;
	else {
	    std::cout << item.isbn() << " has " << transaction_count << " transactions." << std::endl;
	    item = new_item;
	    transaction_count = 1;
	}
    }
    std::cout << item.isbn() << " has " << transaction_count << " transactions." << std::endl;
    return 0;
}
