#include <gui/containers/digitY1_CustomContainer.hpp>

digitY1_CustomContainer::digitY1_CustomContainer()
{

}

void digitY1_CustomContainer::initialize()
{
    digitY1_CustomContainerBase::initialize();
}

void digitY1_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
