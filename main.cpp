//include headers std::map, std::array, std::list
void simulateLibraryOperations(std::map<int, std::array<std::list<std::string>, 3>>& library, int days) {
	for (int day =1; day <= days; ++day){
	//output day and status
	// add, delete, books
	//check out or return
	//save data to history
	//display changes
	}
}

int main() {
    std::map<int, std::array<std::list<std::string>, 3>> library; 
	//get the data from history
    loadLibraryData(library);
	//show the number for book, author name, title name, genre, year published, and availability
    while (true){
        displayMenu();
        cout << "Enter choice: ";
        cin >> user_choice;
        cin.ignore;
    }
	while (true) {
	//display menu options
	//collect the input
		switch (user_choice){
			Case 1:
				//new book
			Case 2:
				//delete book
			Case 3:
				//search for book
			Case 4:
				//list books
			Case 5:
				//quit/stop
				return 0;
	}
	return 0;
}
