#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum_transactions;
    if (std::cin >> sum_transactions) {
	while(std::cin >> item) {
	    sum_transactions += item;
	}
	std::cout << sum_transactions << std::endl;
    }

    return 0;
}
