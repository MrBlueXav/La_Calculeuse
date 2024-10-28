#include <gui/containers/digitX2_CustomContainer.hpp>

digitX2_CustomContainer::digitX2_CustomContainer()
{

}

void digitX2_CustomContainer::initialize()
{
    digitX2_CustomContainerBase::initialize();
}

void digitX2_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
