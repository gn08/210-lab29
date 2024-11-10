//include headers std::map, std::array, std::list
#include <iostream>
#include <cstdlib>
using namespace std;

void simulateLibraryOperations(std::map<int, std::array<std::list<std::string>, 3>>& library, int days) {
	for (int day =1; day <= days; ++day){
	//output day and status
        cout << "Day: " << day << endl;
	// add, delete, books
        if (rand() % 2 == 0){
            int new_id = library.size()+ 1;
        }
        if (!library.empty() && rand() % 3 == 0){
            int random_id = rand() % library.size() + 1;
            if(library.erase(random_id)){
                cout << "Delete book with id: " << random_id << endl;
            }
        }
	//check out or return
        for (auto& entry : library){
            if(rand() % 4 == 0){
                string& availability = entry.second[2].front();
                availability = (availability == "Available")
                cout << "Book id" << entry.first << " is now " << availability;
            }
        }
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
