/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: Josh Zutell
 */

//============================================================================
//	TODO add necessary includes here
//============================================================================
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <string.h>
#include "array_functions.h"
#include "utilities.h"
#include "constants.h"

//============================================================================
//	stuff you will need
//============================================================================

struct word {
	std::string wrd;
	int occur;
};

struct word words[1000];
int slot = 0;

//zero out array that tracks words and their occurrences
void clearArray() {
	slot = 0;
	memset(words, 0, sizeof(words));
}

//how many unique words are in array
int getArraySize() {
	int size = 0;
	int numEle = sizeof(words) / sizeof(words[0]);

	for (int i = 0; i < numEle; i++) {
		if (words[i].occur != 0) {
			size++;
		}
	}

	std::cout << size;
	return size;
}

//get data at a particular location
std::string getArrayWordAt(int i) {
	return words[i].wrd;
}

int getArrayWord_NumbOccur_At(int i) {
	return words[i].occur;
}

/*loop through whole file, one line at a time
 * call processLine on each line
 * returns false: myfstream is not open
 *         true: otherwise*/
bool processFile(std::fstream &myfstream) {
	if (myfstream.is_open()) {
		std::string line;

		while (!myfstream.eof()) {
			getline(myfstream, line);
			processLine(line);
		}

		return true;
	}
	return false;
}

/*take 1 line and extract all the tokens from it
feed each token to processToken for recording*/
void processLine(std::string &myString) {
//	std::string wrd = "";
//	std::string line[100];
//	int slot = 0;
//
//	int length = myString.length();
//
//	for (int i = 0; i < length; i++) {
//		if (myString.substr(i, i+1) == " ") {
//			line[slot] = wrd;
//			slot++;
//			if (slot == sizeof(line)) {
//				std::string temp[slot];
//				for (int i = 0; i < sizeof(line); i++) {
//					temp[i] = line[i];
//				}
//			}
//			wrd = "";
//		}
//		else {
//			wrd += myString.substr(i, i+1);
//		}
//	}
//
//	int lineLen = sizeof(line);
//
//	for (int i = 0; i < lineLen; i++) {
//		processToken(line[i]);
//	}
}

/*Keep track of how many times each token seen*/
void processToken(std::string &token) {

//	bool first = true;
//	int length = sizeof(words);

//	for (int i = 0; i < length; i++) {
//		if (toUpper(token) == toUpper(words[i].wrd)) {
//			words[i].occur += 1;
//			first = false;
//			break;
//		}
//	}

//	if (first) {
//		struct word first_occur;
//		first_occur.wrd = token;
//		first_occur.occur = 1;
//		words[index] = first_occur;
//		index++;
//
//		if (index == sizeof(words)) {
//			struct word temp[index];
//			for (int i = 0; i < length; i++) {
//				temp[i] = words[i];
//			}
////			words = temp;
//		}
//	}
}

/*if you are debugging the file must be in the project parent directory
  in this case Project2 with the .project and .cProject files*/
bool openFile(std::fstream& myfile, const std::string& myFileName,
		std::ios_base::openmode mode) {

	myfile.open(myFileName.c_str(), mode);
	return myfile.is_open();
}

/*iff myfile is open then close it*/
void closeFile(std::fstream& myfile) {
	if (myfile.is_open()) {
		myfile.close();
	}
}

/* serializes all content in myEntryArray to file outputfilename
 * returns  FAIL_FILE_DID_NOT_OPEN if cannot open outputfilename
 * 			FAIL_NO_ARRAY_DATA if there are 0 entries in myEntryArray
 * 			SUCCESS if all data is written and outputfilename closes OK
 * */
int writeArraytoFile(const std::string &outputfilename) {
	using namespace std;
	using namespace constants;

	if (sizeof(words) == 0) {
		return FAIL_NO_ARRAY_DATA;
	}

	ofstream myEntryArray;
	myEntryArray.open(outputfilename.c_str());

	if (myEntryArray.is_open()) {
		myEntryArray << words;
		myEntryArray.close();
		return SUCCESS;
	}

	return FAIL_FILE_DID_NOT_OPEN;

}

/*
 * Sort myEntryArray based on so enum value.
 * You must provide a solution that handles alphabetic sorting (A-Z)
 * The presence of the enum implies a switch statement based on its value
 */
void sortArray(constants::sortOrder so) {
//	using namespace constants;
//	using namespace std;
//	switch (so) {
//	case (ASCENDING):
//		for (int i = 0; i < sizeof(words) - 1; i++) {
//			for (int j = 0; j < sizeof(words) - i - 1; j++) {
//				if (words[j].wrd > words[j+1].wrd) {
//					struct word temp;
//					temp.wrd = words[j].wrd;
//					temp.occur = words[j].occur;
//
//					words[j] = words[j+1];
//					words[j+1] = temp;
//				}
//			}
//		}
//		break;
//	case (DESCENDING):
//		for (int i = sizeof(words) - 1; i < 0; i--) {
//			for (int j = sizeof(words) - i - 1; j < 0; j--) {
//				if (words[j].wrd < words[j-1].wrd) {
//					struct word temp;
//					temp.wrd = words[j].wrd;
//					temp.occur = words[j].occur;
//
//					words[j] = words[j-1];
//					words[j-1] = temp;
//				}
//			}
//		}
//		break;
//	case (NUMBER_OCCURRENCES):
//		for (int i = 0; i < sizeof(words) - 1; i++) {
//			for (int j = 0; j < sizeof(words) - i - 1; j++) {
//				if (words[j].occur < words[j+1].occur) {
//					struct word temp;
//					temp.wrd = words[j].wrd;
//					temp.occur = words[j].occur;
//
//					words[j] = words[j+1];
//					words[j+1] = temp;
//				}
//			}
//		}
//		break;
//	default:
//		break;
//	}
}

