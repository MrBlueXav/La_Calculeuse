#include <gui/containers/digitX3_CustomContainer.hpp>

digitX3_CustomContainer::digitX3_CustomContainer()
{

}

void digitX3_CustomContainer::initialize()
{
    digitX3_CustomContainerBase::initialize();
}

void digitX3_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
