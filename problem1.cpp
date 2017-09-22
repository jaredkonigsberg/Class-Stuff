// Author: Jared Konigsberg
//
// Assignment 3
// Problem 1


#include <iostream>
using namespace std;







void story1(void){

string plural;
    cout << "Enter a plural noun: " ;
    cin >> plural;


string occupation;
    cout << "Enter a occupation :";
    cin >> occupation;

string aname;
    cout << "Enter an animal name: ";
    cin >> aname;

string place;
    cout << "Enter a place: ";
    cin >> place;

    cout << "In the book War of the "<< plural << ", the main character is an anonymous " << occupation << " who records the arrival of the " << aname << "s in " << place << "." <<endl;



}

void story2(void){


string name;
    cout << "Enter a name: " ;
    cin >> name;

string state;
    cout << "Enter a state/country: " ;
    cin >> state;


    cout << name << ", " << "I've got a feeling we're not in " << state << " anymore." <<endl;




}


void story3(void){




string name;
    cout  << "Enter a first name: ";
    cin >> name;


string relative;
    cout << "Enter a relative: ";
    cin >> relative;


string verb;
    cout << "Enter a verb: ";
    cin >> verb;



    cout << "Hello. " <<  "My name is " << name << "."<< " You killed my " << relative << "." << " Prepare to " << verb << "." <<endl;







}








void menu(void){

    string input;

do{
    cout << "Which story would you like to play? Enter the number of the story 1, 2, or 3 or type q to quit: " << endl;
    cin >> input;


if (input == "1")
        story1();

if (input == "2")
        story2();

if (input == "3")
        story3();

if (input != "1" && input != "2" && input != "3" && input != "q")
        cout << "Valid choice not selected " << endl;


} while( input != "q");


if  ( input == "q")
        cout<< "good bye"<< endl;

}




int main(void){


        menu();


}



