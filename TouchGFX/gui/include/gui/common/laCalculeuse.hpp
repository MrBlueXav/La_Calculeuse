/*
 * laCalculeuse.hpp
 *
 *  Created on: Oct 27, 2024
 *      Author: Xavier Halgand
 */

#ifndef APPLICATION_USER_GUI_LACALCULEUSE_HPP_
#define APPLICATION_USER_GUI_LACALCULEUSE_HPP_

//-------------------------------------------------------------------------------------------
// calculation errors codes :
enum MessageX {
	OVERFLOW_ERROR,
	SUB_ERROR,
	DIV_ERROR,
};

// Number of digits for X and Y :
constexpr uint8_t NbrOfDigits = 6;

// Simple computing of a power of 10 :
constexpr int64_t powerOfTen(uint8_t n) {

	if (n == 0) return 1;

	int64_t ans = 1;
	for (uint8_t i = 0; i < NbrOfDigits; i++) {
		ans *= 10;
	}
	return ans;
}

// Maximum number for X and Y :
constexpr int64_t MaxNumber = powerOfTen(NbrOfDigits) - 1; //should be 999999 for 6 digits
//-------------------------------------------------------------------------------------------

#endif /* APPLICATION_USER_GUI_LACALCULEUSE_HPP_ */
