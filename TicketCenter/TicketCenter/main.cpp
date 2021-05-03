﻿#include <iostream>
#include "Hall.h"
#include "myVector.h"
#include "myString.h"
#include "Date.h"
#include "TicketCenter.h"

int main()
{
	std::cout << "Enter name: ";
	myString ticketCenterName;
	std::cin >> ticketCenterName;

	TicketCenter ticketCenter{ ticketCenterName };
	ticketCenter.startUp();

	return 0;
}