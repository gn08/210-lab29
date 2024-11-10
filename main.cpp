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
    int user_choice;
	//get the data from history
    loadLibraryData(library);
	//show the number for book, author name, title name, genre, year published, and availability
	while (true) {
	//display menu options
        displayMenu();
        cout << "Enter choice: ";
	//collect the input
        cin >> user_choice;
        cin.ignore;
		switch (user_choice){
			case 1:
				//new book
                add_book(library);
                break;
			case 2:
				//delete book
                delete_book(library);
                break;
			case 3:
				//search for book
                search_book(library);
                break;
			case 4:
				//list books
                list_books(library);
                break;
			case 5:
                save_data(library);
                cout << "Exit";
                return 0;
				//quit/stop
			default:
                cout << "Invalid";
        }
	}
	return 0;
}
