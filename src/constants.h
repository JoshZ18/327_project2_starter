/*
 * constants.h
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_
#include <string>

namespace constants {
	enum sortOrder {
		NONE,ASCENDING, DESCENDING, NUMBER_OCCURRENCES
	};

	const std::string TEST_DATA_EMPTY = "./data/testdata_empty";
	const std::string TEST_DATA_FULL = "./data/testdata_full";
	const std::string TEST_DATA_FULL_OUT = "./output/testdata_full.out";
	const std::string TEST_DATA_FULL_PROCESSED = "./data/testdata_full_processed";
	const std::string TEST_DATA_FULL_PROCESSED_SORTED = "./data/testdata_full_processed_sorted";
	const std::string TEST_DATA_NON_EXISTANT = "./data/nonexistantfile";

	const int MAX_WORDS = 2100;			//size of array, what if there are more than 2100 words?
	const char CHAR_TO_SEARCH_FOR = ' ';//the word separator

	//return codes
	const int SUCCESS = 0;
	const int FAIL = SUCCESS-1;
	const int FAIL_FILE_DID_NOT_OPEN = SUCCESS-2;
	const int FAIL_NO_ARRAY_DATA = SUCCESS-3;

	const int ONE_POINTS = 1;
	const int TWO_POINTS = 2;
	const int THREE_POINTS = 3;
	const int FIVE_POINTS = 5;
	const int TEN_POINTS = 10;
	const int FIFTEEN_POINTS = 15;
}
#endif /* CONSTANTS_H_ */
