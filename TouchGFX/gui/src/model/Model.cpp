/*----------------------------------------------------------------------------------------
 * Model.cpp = brain of La Calculeuse
 *
 * Xavier Halgand - 10/2024
 *
 -----------------------------------------------------------------------------------------
 */


#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

//----------------------------------------------------------------------------------------
Model::Model() :
		modelListener(0) {
	reset_X();
	reset_Y();
}

void Model::tick() {

}
//----------------------------------------------------------------------------------------
void Model::reset_X() {

	numberX = 0;
	for (int8_t i = 0; i < NbrOfDigits; i++) {
		digitsX[i] = 0;
	}
	//modelListener->displayDebugX(numberX);
}

void Model::reset_Y() {

	numberY = 0;
	for (int8_t i = 0; i < NbrOfDigits; i++) {
		digitsY[i] = 0;
	}
	//modelListener->displayDebugY(numberY);
}

void Model::addXY() {

	int32_t sum = numberX + numberY;
	if (sum < 1000000) {
		// tester le dépassement...
		numberX = sum;

		int32_t x = numberX;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			digitsX[i] = x % 10;
			x = x / 10;
		}

		modelListener->displayX(digitsX, NbrOfDigits);
		//modelListener->displayDebugX(numberX);
	} else {
		modelListener->sendMessage(OVERFLOW_ERROR);
	}
}

void Model::subXY() {

	int32_t diff = numberX - numberY;
	if (diff >= 0) {
		numberX = diff;

		int32_t x = numberX;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			digitsX[i] = x % 10;
			x = x / 10;
		}

		modelListener->displayX(digitsX, NbrOfDigits);
	} else {
		modelListener->sendMessage(SUB_ERROR);
	}

}

void Model::mulXY() {

	int64_t mult = (int64_t) numberX * (int64_t) numberY;
	if (mult <= MaxNumber) { // No overflow
		numberX = mult;

		int32_t x = mult;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			digitsX[i] = x % 10;
			x = x / 10;
		}

		modelListener->displayX(digitsX, NbrOfDigits);
	} else {
		modelListener->sendMessage(OVERFLOW_ERROR);
	}

}

void Model::divXY() {

	if (numberY != 0) {
		int32_t quot = numberX / numberY;
		int32_t rem = numberX % numberY;
		numberX = quot;

		int32_t x = quot;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			digitsX[i] = x % 10;
			x = x / 10;
		}

		modelListener->displayX(digitsX, NbrOfDigits); /* Display quotient */
		modelListener->displayR(rem); /* Display remainder */

	} else {
		modelListener->sendMessage(DIV_ERROR);
	}

}

void Model::update_NumberX(uint8_t position, uint8_t value) {

	if (position < NbrOfDigits && value < 10) {
		digitsX[position] = value;
		numberX = 0;
		int32_t expo = 1;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			numberX = numberX + digitsX[i] * expo;
			expo *= 10;
		}
		//modelListener->displayDebugX(numberX);
	}

}

void Model::update_NumberY(uint8_t position, uint8_t value) {

	if (position < NbrOfDigits && value < 10) {
		digitsY[position] = value;
		numberY = 0;
		int32_t expo = 1;
		for (int8_t i = 0; i < NbrOfDigits; i++) {
			numberY = numberY + digitsY[i] * expo;
			expo *= 10;
		}
		//modelListener->displayDebugY(numberY);
	}
}

//********************************************************************************************************************
