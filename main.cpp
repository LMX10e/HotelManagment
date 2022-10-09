#include <iostream> // prinf, scanf, puts, NULL 
#include <stdlib.h> // srand, rand 
#include <time.h> // time 
#include <string>

int main() {
	const std::string hotelName = "Dracula | The Beginning";
	const int totalRooms = 134;
	const int firstRoomNumber = 110;

	
	// generate a number between 0 and 19
	srand(time(NULL));

	int roomsOccupied = rand() % totalRooms + 1;
	int roomsAvailable = totalRooms - roomsOccupied;

	float occupancyRate = ( float (roomsOccupied) / float (totalRooms)) * 100;
	std::string occupancyLevel;

	if (occupancyRate > 70) {
		occupancyLevel = "High";

	} else if (occupancyRate > 20) {
		occupancyLevel = "Medium";
	} else {
		occupancyLevel = "Low";
	}

	std::cout << "Hotel: " << hotelName << "\n";
	std::cout << "Number of rooms: " << totalRooms << "\n";
	std::cout << "Rooms available: " << roomsAvailable << "\n";
	std::cout << "					  OccupancyLevel: " << occupancyLevel << "\n";
	printf("				          OccupancyRate: %0.2f %%\n", occupancyRate);

	if (roomsAvailable > 0) {
		std::cout << "Rooms: \n";
		for (int i = 0; roomsAvailable > i; i++) {
			int roomNumber = firstRoomNumber + i;
			int size = rand() % 6 + 1;
			int nights = rand() % 10 + 1;
			std::cout << roomNumber << ":" << size << " people / " << nights << " nights" << "\n";
		} 
	
	} else {
		std::cout << "N.R.A.T \n";
	}


	return 0;
}
