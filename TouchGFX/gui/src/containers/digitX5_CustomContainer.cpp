#include <gui/containers/digitX5_CustomContainer.hpp>

digitX5_CustomContainer::digitX5_CustomContainer()
{

}

void digitX5_CustomContainer::initialize()
{
    digitX5_CustomContainerBase::initialize();
}

void digitX5_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
