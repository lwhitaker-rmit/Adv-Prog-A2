#include "LinkedList.h"

#include <iostream>

#define EXIT_SUCCESS    0

void println(std::string str);
void println();
void print(std::string str);

int main(void) {
   LinkedList* list = new LinkedList();
   
   // Linked List Testing
   // std::cout << "LINKED LIST TESTING" << std::endl;
   // list->add(new Tile('h', 1));
   // std::cout << list->length() << std::endl; // exp: "1"
   // list->add(new Tile('e', 1));
   // std::cout << list->length() << std::endl; // exp: "2"
   // list->add(new Tile('y', 2));
   // std::cout << list->length() << ":" << std::endl; // exp: "3:"
   // list->printList(); // exp: "hey"
   // list->remove('e');
   // std::cout << list->length() << ":" << std::endl; // exp: "2:"
   // list->printList(); // exp: "hy"
   // list->add(new Tile('p', 1));
   // list->add(new Tile('e', 1));
   // std::cout << list->length() << ":" << std::endl; // exp: "4:"
   // list->printList(); // exp: "hype"

   delete list;
   // Welcome text
   println();
   println("Welcome to Scrabble!");
   println("-------------------");
   println();

   // Initialise menu variables
   std::string state = "menu";
   std::string menu_input;

   // BEGIN MENU LOOP
   
   while (state != "quit") {

      // Display main menu
      println("Menu");
      println("----");
      println("1. New Game");
      println("2. Load Game");
      println("3. Credits (Show student information)");
      println("4. Quit");
      println();

      // Gather input
      print("> ");
      std::cin >> menu_input;
      println();

      if (menu_input == "1") {
         // User picked "New Game"
         std::cout << "TODO: Implement Scrabble!" << std::endl;

         println();
      } else if (menu_input == "2") {
         // User picked "Load game"
         println("TODO: Implement Load feature.");

         println();
      } else if (menu_input == "3") {
         // User picked "Credits"
         println("-----------------------------------");
         println("Name: Lian Whitaker");
         println("Student ID: s3899679");
         println("Email: s3899679@student.rmit.edu.au");
         println();
         // More students would be here, in an ideal world...
         println("-----------------------------------");

         println();
      } else if (menu_input == "4") {
         // User picked "quit"
         state = "quit";

         println("Goodbye.");
         println();
      } else {
         println("Invalid input. Please select an option (1-4)");
         println();
      }
   }



   return EXIT_SUCCESS;
}

void println(std::string str) {
   std::cout << str << std::endl;
}

void println() {
   std::cout << std::endl;
}

void print(std::string str) {
   std::cout << str;
}