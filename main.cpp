#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include "TodoList.h"

using namespace std;

void AddToDoListItem(vector<string> toDoList);
void RemoveListItem(vector<string> toDoList);

int main(int argc, char *argv[]) {
   //vector<string> toDoList;

   TodoList mylist;

    for(int i = 0; i < argc; i++) {
	   cout << "argv[" << i << "]=" << argv[i] << endl;
	}
	string firstarg = argv[1];
	if(firstarg.compare("add")==0) {
		cout << "Doing an add" << endl;
		string date = argv[2];
		string task = argv[3];
		cout << "date " << date << " task " << task << endl;
		mylist.add(date, task);
	} 
	else if (firstarg.compare("remove")==0) {
		cout << "Removing" << endl;
		string taskToRemove = argv[2];
		cout << "removing task " << taskToRemove << endl;
		mylist.remove(taskToRemove);

	}
	
	return 0;
}

void AddToDoListItem(vector<string> toDoList) {
	string itemToAdd = "none"; 
	cout << "Enter to do list item to add: ";
	getline(cin, itemToAdd);
	toDoList.push_back(itemToAdd);
}
void RemoveListItem(vector<string> toDoList) {
	string itemToRemove = "none";
	cout << "Enter to do list item to remove: ";
	getline(cin, itemToRemove);
	cout << toDoList.size();
	toDoList.at(0);
	//delete toDoList.at(itemToRemove);
}