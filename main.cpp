//include headers std::map, std::array, std::list
#include <iostream>
#include <cstdlib>
using namespace std;

void simulate_library(map<int, array<list<string>, 3>>& library, int days);
void load_library(map<int, array<list<string>, 3>>& library);
void save_library(const map<int, array<list<string>, 3>>& library);
void display_menu();
void add_book(map<int, array<list<string>, 3>>& library);
void delete_book(map<int, arrary<list<string>, 3>>& library);
void search_book(const map<int, arrary<list<string>, 3>>& library);
void list_books(const map<int, array<list<string>, 3>>& library);

int main() {
    map<int, array<list<string>, 3>> library; 
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


void simulate_library(map<int, array<list<string>, 3>>& library, int days) {
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

void load_library(map<int, array<list<string>, 3>>& library){
    ifstream inFile("library.txt")
    if (!inFile) {
        cout << "No file";
        return;
    }

    int id;
    string title, author, genre, year, availability;
    while (inFile >> id){
        inFile.ignore();
        getline(inFile, title);
        getline(inFile, author);
        getline(inFile, genre);
        getline(inFile, year);
        getline(inFile, availability);

        library[id] = {{title, author}, {genre, year}, {availability}};
    }
    inFile.close();
}

void save_library(const map<int, array<list<string>, 3>>& library){
    ofstream outFile("library.txt");
    for(const auto& entry : library){
        outFile << entry.first << endl;
        outFile << entry.second[0].front() << endl;
        outFile << entry.second[0].back() << endl;
        outFile << entry.second[1].front() << endl;
        outFile << entry.second[1].back() << endl;
        outFile << entry.second[2].front() << endl;
    }
    outFile.close();
}

void display_menu(){
    cout << "Library: "
        << "1. New book" << endl
        << "2. Delete book" << endl
        << "3. Search book" << endl
        << "4. List books" << endl
        << "5. Quit";
}

void add_book(map<int, array<list<string>, 3>>& library){
    int id;
    string title;
    string author;
    string genre;
    string year;
    string availability;
    availability = "Available";

    cout << "Enter id: ";
    cin >> id;
    cin.ignore();

    cout << "Book Title: "   ;
    getline(cin, title);
    cout << "Author Name: ";
    getline(cin, author);
    cout << "Genre: ";
    getline(cin, genre);
    cout << "Publication year: ";
    getline(cin, year);

    library[id] = {{title, author}, {genre, year}, {availability}};
    cout << "Book added" << endl;
}

void delete_book(map<int, arrary<list<string>, 3>>& library){
    int id;
    cout << "Enter id to delete: ";
    cin >> id;

    if(library.erase(id)){
        cout << "Book deleted"
    } else {
        cout << "Book non-existent";
    }
}

void search_book(const map<int, arrary<list<string>, 3>>& library){

}

void list_books(const map<int, array<list<string>, 3>>& library){

}
