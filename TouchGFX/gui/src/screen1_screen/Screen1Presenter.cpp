/**
  ******************************************************************************
  * @file           : Screen1Presenter.cpp
  * @brief          : Presenter for screen 1
  *
  * by Xavier Halgand
  * 10/2024
  *
  ******************************************************************************
  */


#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View &v) :
		view(v) {

}

void Screen1Presenter::activate() {

}

void Screen1Presenter::deactivate() {

}

//-------------------------------------------------------------

void Screen1Presenter::razX_ButtonClicked() {

	model->reset_X();
}

void Screen1Presenter::razY_ButtonClicked() {

	model->reset_Y();
}

void Screen1Presenter::add_XY_ButtonClicked() {

	model->addXY();

}

void Screen1Presenter::sub_XY_ButtonClicked() {

	model->subXY();

}

void Screen1Presenter::mul_XY_ButtonClicked() {

	model->mulXY();

}

void Screen1Presenter::div_XY_ButtonClicked() {

	model->divXY();

}

void Screen1Presenter::updateNumberX(uint8_t position, uint8_t value) {

	model->update_NumberX(position, value);

}

void Screen1Presenter::updateNumberY(uint8_t position, uint8_t value) {

	model->update_NumberY(position, value);

}
//-------------------------------------------------------------

void Screen1Presenter::displayX(uint8_t digits[], uint8_t len) {

	view.screen1DisplayX(digits, len);
}

void Screen1Presenter::displayR(int32_t r) {

	view.screen1DisplayR(r);

}

void Screen1Presenter::sendMessage(MessageX msg) {

	view.screen1SendMessage(msg);
}

void Screen1Presenter::displayDebugX(int32_t x) {

	view.screen1DisplayDebugX(x);
}

void Screen1Presenter::displayDebugY(int32_t y) {

	view.screen1DisplayDebugY(y);
}


//********************************************************************************************************************
