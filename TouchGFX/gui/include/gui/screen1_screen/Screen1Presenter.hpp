/**
  ******************************************************************************
  * @file           : Screen1Presenter.hpp
  * @brief          : Presenter for screen 1
  *
  * by Xavier Halgand
  * 10/2024
  *
  ******************************************************************************
  */


#ifndef SCREEN1PRESENTER_HPP
#define SCREEN1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen1View;

class Screen1Presenter: public touchgfx::Presenter, public ModelListener {
public:
	Screen1Presenter(Screen1View &v);

	/**
	 * The activate function is called automatically when this screen is "switched in"
	 * (ie. made active). Initialization logic can be placed here.
	 */
	virtual void activate();

	/**
	 * The deactivate function is called automatically when this screen is "switched out"
	 * (ie. made inactive). Teardown functionality can be placed here.
	 */
	virtual void deactivate();

	virtual ~Screen1Presenter() {
	}

	void razX_ButtonClicked();
	void razY_ButtonClicked();
	void add_XY_ButtonClicked();
	void sub_XY_ButtonClicked();
	void mul_XY_ButtonClicked();
	void div_XY_ButtonClicked();
	void updateNumberX(int8_t position, int8_t value);
	void updateNumberY(int8_t position, int8_t value);

	virtual void displayX(int8_t digits[], int8_t len);
	virtual void displayR(int32_t r);
	virtual void sendMessage(MessageX msg);
	virtual void displayDebugX(int32_t x);
	virtual void displayDebugY(int32_t y);

private:
	Screen1Presenter();

	Screen1View &view;
};

#endif // SCREEN1PRESENTER_HPP
