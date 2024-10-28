#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View: public Screen1ViewBase {
public:
	Screen1View();
	virtual ~Screen1View() {
	}
	virtual void setupScreen();
	virtual void tearDownScreen();

	virtual void digitX0_scrollWheelUpdateItem(digitX0_CustomContainer &item, int16_t itemIndex);
	virtual void digitX0_scrollWheelUpdateCenterItem(digitX0_CustomContainer &item, int16_t itemIndex);
	virtual void digitX1_scrollWheelUpdateItem(digitX1_CustomContainer &item, int16_t itemIndex);
	virtual void digitX1_scrollWheelUpdateCenterItem(digitX1_CustomContainer &item, int16_t itemIndex);
	virtual void digitX2_scrollWheelUpdateItem(digitX2_CustomContainer &item, int16_t itemIndex);
	virtual void digitX2_scrollWheelUpdateCenterItem(digitX2_CustomContainer &item, int16_t itemIndex);
	virtual void digitX3_scrollWheelUpdateItem(digitX3_CustomContainer &item, int16_t itemIndex);
	virtual void digitX3_scrollWheelUpdateCenterItem(digitX3_CustomContainer &item, int16_t itemIndex);
	virtual void digitX4_scrollWheelUpdateItem(digitX4_CustomContainer &item, int16_t itemIndex);
	virtual void digitX4_scrollWheelUpdateCenterItem(digitX4_CustomContainer &item, int16_t itemIndex);
	virtual void digitX5_scrollWheelUpdateItem(digitX5_CustomContainer &item, int16_t itemIndex);
	virtual void digitX5_scrollWheelUpdateCenterItem(digitX5_CustomContainer &item, int16_t itemIndex);

	virtual void digitY0_scrollWheelUpdateItem(digitY0_CustomContainer &item, int16_t itemIndex);
	virtual void digitY0_scrollWheelUpdateCenterItem(digitY0_CustomContainer &item, int16_t itemIndex);
	virtual void digitY1_scrollWheelUpdateItem(digitY1_CustomContainer &item, int16_t itemIndex);
	virtual void digitY1_scrollWheelUpdateCenterItem(digitY1_CustomContainer &item, int16_t itemIndex);
	virtual void digitY2_scrollWheelUpdateItem(digitY2_CustomContainer &item, int16_t itemIndex);
	virtual void digitY2_scrollWheelUpdateCenterItem(digitY2_CustomContainer &item, int16_t itemIndex);
	virtual void digitY3_scrollWheelUpdateItem(digitY3_CustomContainer &item, int16_t itemIndex);
	virtual void digitY3_scrollWheelUpdateCenterItem(digitY3_CustomContainer &item, int16_t itemIndex);
	virtual void digitY4_scrollWheelUpdateItem(digitY4_CustomContainer &item, int16_t itemIndex);
	virtual void digitY4_scrollWheelUpdateCenterItem(digitY4_CustomContainer &item, int16_t itemIndex);
	virtual void digitY5_scrollWheelUpdateItem(digitY5_CustomContainer &item, int16_t itemIndex);
	virtual void digitY5_scrollWheelUpdateCenterItem(digitY5_CustomContainer &item, int16_t itemIndex);

	/*
	 * Virtual Action Handlers
	 */
	virtual void raz_X();
	virtual void raz_y();
	virtual void add_XY();
	virtual void sub_XY();
	virtual void mul_XY();
	virtual void div_XY();
	virtual void ok_function();

	void screen1DisplayX(const int8_t digits[], const int8_t len);
	void screen1DisplayR(int32_t r);
	void screen1SendMessage(MessageX msg);
	void screen1DisplayDebugX(int32_t x);
	void screen1DisplayDebugY(int32_t y);

protected:
};

#endif // SCREEN1VIEW_HPP
