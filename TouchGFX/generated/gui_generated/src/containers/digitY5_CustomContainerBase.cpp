/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/digitY5_CustomContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

digitY5_CustomContainerBase::digitY5_CustomContainerBase()
{
    setWidth(63);
    setHeight(94);
    textArea1.setPosition(11, 22, 42, 47);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_IZFH).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_I5FO));
    add(textArea1);
}

digitY5_CustomContainerBase::~digitY5_CustomContainerBase()
{

}

void digitY5_CustomContainerBase::initialize()
{

}
