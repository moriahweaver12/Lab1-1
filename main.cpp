#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void AddToDoListItem(vector<string> toDoList);
void RemoveListItem(vector<string> toDoList);

int main(int argc, char *argv[]) {
   vector<string> toDoList;

   ofstream myfile;

   /*for(int i = 0; i < argc; i++) {
      cout << "argv[" << i << "]=" << argv[i] << endl;
   }
   string firstarg = argv[1];
   if(firstarg.compare("add")==0) {
      cout << "Doing an add" << endl;
   } */

   myfile.open ("TODOList.txt");

   cout << "Input your to do list items:";

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
   delete toDoList.at(itemToRemove);

}