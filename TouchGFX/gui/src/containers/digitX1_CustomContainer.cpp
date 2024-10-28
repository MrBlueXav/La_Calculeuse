#include <gui/containers/digitX1_CustomContainer.hpp>

digitX1_CustomContainer::digitX1_CustomContainer()
{

}

void digitX1_CustomContainer::initialize()
{
    digitX1_CustomContainerBase::initialize();
}

void digitX1_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
