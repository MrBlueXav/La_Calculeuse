/**
  ******************************************************************************
  * @file           : Screen1View.cpp
  * @brief          : View for screen 1
  *
  * by Xavier Halgand
  * 10/2024
  *
  ******************************************************************************
  */


#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View() {

}

void Screen1View::setupScreen() {
	Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen() {
	Screen1ViewBase::tearDownScreen();
}

//-----------------------------------------------------------------------------------------------------------

// Similar to scrollListUpdateItem the two functions scrollWheelUpdateItem and scrollWheelUpdateCenterItem,
// updates the text in the scroll wheel based on the item's index

void Screen1View::digitX0_scrollWheelUpdateItem(digitX0_CustomContainer &item, int16_t itemIndex) {

	item.updateText(itemIndex);
	int digit = 9 - digitX0_scrollWheel.getSelectedItem();
	presenter->updateNumberX(0, digit);
}

void Screen1View::digitX0_scrollWheelUpdateCenterItem(digitX0_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitX1_scrollWheelUpdateItem(digitX1_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitX1_scrollWheel.getSelectedItem();
	presenter->updateNumberX(1, digit);
}

void Screen1View::digitX1_scrollWheelUpdateCenterItem(digitX1_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitX2_scrollWheelUpdateItem(digitX2_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitX2_scrollWheel.getSelectedItem();
	presenter->updateNumberX(2, digit);
}

void Screen1View::digitX2_scrollWheelUpdateCenterItem(digitX2_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitX3_scrollWheelUpdateItem(digitX3_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitX3_scrollWheel.getSelectedItem();
	presenter->updateNumberX(3, digit);
}

void Screen1View::digitX3_scrollWheelUpdateCenterItem(digitX3_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitX4_scrollWheelUpdateItem(digitX4_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitX4_scrollWheel.getSelectedItem();
	presenter->updateNumberX(4, digit);
}

void Screen1View::digitX4_scrollWheelUpdateCenterItem(digitX4_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitX5_scrollWheelUpdateItem(digitX5_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitX5_scrollWheel.getSelectedItem();
	presenter->updateNumberX(5, digit);
}

void Screen1View::digitX5_scrollWheelUpdateCenterItem(digitX5_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

//--------------------------------------------------------------------------------------------------

void Screen1View::digitY0_scrollWheelUpdateItem(digitY0_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY0_scrollWheel.getSelectedItem();
	presenter->updateNumberY(0, digit);
}

void Screen1View::digitY0_scrollWheelUpdateCenterItem(digitY0_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitY1_scrollWheelUpdateItem(digitY1_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY1_scrollWheel.getSelectedItem();
	presenter->updateNumberY(1, digit);
}

void Screen1View::digitY1_scrollWheelUpdateCenterItem(digitY1_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitY2_scrollWheelUpdateItem(digitY2_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY2_scrollWheel.getSelectedItem();
	presenter->updateNumberY(2, digit);
}

void Screen1View::digitY2_scrollWheelUpdateCenterItem(digitY2_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitY3_scrollWheelUpdateItem(digitY3_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY3_scrollWheel.getSelectedItem();
	presenter->updateNumberY(3, digit);
}

void Screen1View::digitY3_scrollWheelUpdateCenterItem(digitY3_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitY4_scrollWheelUpdateItem(digitY4_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY4_scrollWheel.getSelectedItem();
	presenter->updateNumberY(4, digit);
}

void Screen1View::digitY4_scrollWheelUpdateCenterItem(digitY4_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

void Screen1View::digitY5_scrollWheelUpdateItem(digitY5_CustomContainer &item, int16_t itemIndex) {
	item.updateText(itemIndex);
	int digit = 9 - digitY5_scrollWheel.getSelectedItem();
	presenter->updateNumberY(5, digit);
}

void Screen1View::digitY5_scrollWheelUpdateCenterItem(digitY5_CustomContainer &item, int16_t itemIndex) {
//	item.updateText(itemIndex);

}

/*
 *  Action Handlers : reset number X to 0
 */
void Screen1View::raz_X() {

	digitX0_scrollWheel.animateToItem(9);
	digitX1_scrollWheel.animateToItem(9);
	digitX2_scrollWheel.animateToItem(9);
	digitX3_scrollWheel.animateToItem(9);
	digitX4_scrollWheel.animateToItem(9);
	digitX5_scrollWheel.animateToItem(9);

	presenter->razX_ButtonClicked();
}

/*
 *  Action Handlers : reset number Y to 0
 */
void Screen1View::raz_y() {

	digitY0_scrollWheel.animateToItem(9);
	digitY1_scrollWheel.animateToItem(9);
	digitY2_scrollWheel.animateToItem(9);
	digitY3_scrollWheel.animateToItem(9);
	digitY4_scrollWheel.animateToItem(9);
	digitY5_scrollWheel.animateToItem(9);

	presenter->razY_ButtonClicked();

}
void Screen1View::add_XY() {

	presenter->add_XY_ButtonClicked();
	Rcontainer.setVisible(false);
	Rcontainer.invalidate();
}
void Screen1View::sub_XY() {

	presenter->sub_XY_ButtonClicked();
	Rcontainer.setVisible(false);
	Rcontainer.invalidate();
}
void Screen1View::mul_XY() {

	presenter->mul_XY_ButtonClicked();
	Rcontainer.setVisible(false);
	Rcontainer.invalidate();
}
void Screen1View::div_XY() {

	presenter->div_XY_ButtonClicked();
}

void Screen1View::ok_function() {

	overflowError_textArea.setVisible(false);
	subError_textArea.setVisible(false);
	divError_textArea.setVisible(false);
	messageBackground_box.setVisible(false);
	Xcontainer.invalidate();

}

void Screen1View::screen1DisplayX(const uint8_t digits[], const uint8_t len) {

	digitX0_scrollWheel.animateToItem(9 - digits[0]);
	digitX1_scrollWheel.animateToItem(9 - digits[1]);
	digitX2_scrollWheel.animateToItem(9 - digits[2]);
	digitX3_scrollWheel.animateToItem(9 - digits[3]);
	digitX4_scrollWheel.animateToItem(9 - digits[4]);
	digitX5_scrollWheel.animateToItem(9 - digits[5]);

}

void Screen1View::screen1DisplayR(int32_t r) {

	Unicode::snprintf(remainVal_textAreaBuffer, REMAINVAL_TEXTAREA_SIZE, "%d", r);
	Rcontainer.setVisible(true);
	Rcontainer.invalidate();

}

void Screen1View::screen1SendMessage(MessageX msg) {

	messageBackground_box.setVisible(true);

	switch (msg) {
	case OVERFLOW_ERROR:
		overflowError_textArea.setVisible(true);
		break;

	case SUB_ERROR:
		subError_textArea.setVisible(true);
		break;

	case DIV_ERROR:
		divError_textArea.setVisible(true);
		break;

	default:
		break;
	}

	Xcontainer.invalidate();

}

void Screen1View::screen1DisplayDebugX(int32_t x) {

	Unicode::snprintf(debugX_textAreaBuffer, DEBUGX_TEXTAREA_SIZE, "%d", x);
	debugX_textArea.invalidate();

}

void Screen1View::screen1DisplayDebugY(int32_t y) {

	Unicode::snprintf(debugY_textAreaBuffer, DEBUGY_TEXTAREA_SIZE, "%d", y);
	debugY_textArea.invalidate();

}

//**************************************************************************************************************
