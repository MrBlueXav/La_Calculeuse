#include <gui/containers/digitX4_CustomContainer.hpp>

digitX4_CustomContainer::digitX4_CustomContainer()
{

}

void digitX4_CustomContainer::initialize()
{
    digitX4_CustomContainerBase::initialize();
}

void digitX4_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
