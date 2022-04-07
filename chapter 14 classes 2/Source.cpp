//	Eris Suther
//	CIS 1202 101
//	April 7, 2022

#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"
#include "..\..\chapter 13 classes1\chapter 13 classes1\Publication.h"

void getPublicationInfo(Publication&);
void getPublications(Publication[], int&);
void showPublications(Publication[], int);
void showTitles(Publication[], int);
int findPublication(Publication[], int, string);
int getMenuChoice();

int main()
{
	//publication[] is probably the file name thingy and int is most likely count

	//Calls getPublications to read the input file into the array.
	
	//Displays the menu and calls the appropriate functions.
	int menuChoice = getMenuChoice();

	//Menu commands "Find a publication", "Check out", and "Check in" prompt for the title of a publication,
	//invoke findPublication to determine if the publication is available,
	//then the appropriate displayInfo, checkOut, or checkIn method, or 
	//display an error message if the publication was not found.
	switch (menuChoice)
	{
	case 1:
		//display all publications
		break;
	case 2:
		//display publication titles
		break;
	case 3:
		//find a publication
		break;
	case 4:
		//check out
		break;
	case 5:
		//check in
		break;
	case 6:		//exit
		endProgram();
	}
}

void getPublications(Publication[], int&)
{
	//Reads the input file publications.txt to load the file data into the parameter array.
	//For each publication, call the Publication::storePublication function to transfer the data from the file 
	//into the next location in the array.
	//Something like :
	//	while ( /* read file into local variables */)
	//	{
	//		list[i].storePublication( /* variables read from the file */);
	//		i++;
	//	}
}

void showPublications(Publication[], int)
{
	//Loops through all of the publications in the array, calling the method displayInfo for each item in the array.
}

void showTitles(Publication[], int)
{
	//Loops through all of the publications in the array, 
	//calling the method getTitle for each item in the array
	//displays it on the screen.
}
	
int findPublication(Publication[], int, string)
{
	//Loops through all of the publications in the array, 
	//calling the method getTitle for each item in the arrayand compares it to the string parameter.
	//Returns the position in the array of the match, or a sentinel indicating that the publication was not found.
}

//	display menu and returns user choice
int getMenuChoice()
{
	int menuChoice = 0;
	
	cout << "1: display all publications\n2: display all publication titles\n3: find a publication" << endl;
	cout<<"4: check out\n5: check in\n6: exit" << endl;
	menuChoice = validateInteger(6, 1);
	return(menuChoice);
}
	
//	NEVER BE CALLED BUT NIFTY TO HAVE ANYWAY I GUESS???
void getPublicationInfo(Publication& item)
{
	//Prompt for input for the information about a publication, then call the storePublication member function.
	string itemTitle;
	string itemPublisher;
	double itemPrice;
	int itemYear;
	PublicationType itemType;
	int itemStock = 0;
	int typeMenu = 0;

	cout << "Enter title: ";
	getline(cin, itemTitle);
	cout << "Enter publisher: ";
	getline(cin, itemPublisher);
	cout << "Enter price: ";
	itemPrice = validateDouble();
	cout << "Enter year: ";
	itemYear = validateInteger();
	itemType = item.itemType();
	cout << "Enter stock: ";
	itemStock = validateInteger();
	item.storePublication(itemTitle, itemPublisher, itemPrice, itemYear, itemType, itemStock);
}
