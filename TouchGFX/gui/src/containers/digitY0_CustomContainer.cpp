#include <gui/containers/digitY0_CustomContainer.hpp>

digitY0_CustomContainer::digitY0_CustomContainer()
{

}

void digitY0_CustomContainer::initialize()
{
    digitY0_CustomContainerBase::initialize();
}

void digitY0_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
