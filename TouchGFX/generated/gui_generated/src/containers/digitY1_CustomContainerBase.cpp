/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/digitY1_CustomContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

digitY1_CustomContainerBase::digitY1_CustomContainerBase()
{
    setWidth(63);
    setHeight(94);
    textArea1.setPosition(11, 22, 42, 47);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_UV7C).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U0XR));
    add(textArea1);
}

digitY1_CustomContainerBase::~digitY1_CustomContainerBase()
{

}

void digitY1_CustomContainerBase::initialize()
{

}
