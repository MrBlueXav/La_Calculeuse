#include <gui/containers/digitX0_CustomContainer.hpp>

digitX0_CustomContainer::digitX0_CustomContainer()
{

}

void digitX0_CustomContainer::initialize()
{
    digitX0_CustomContainerBase::initialize();
}

void digitX0_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
