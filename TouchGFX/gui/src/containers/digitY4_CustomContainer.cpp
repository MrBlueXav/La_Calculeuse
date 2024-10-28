#include <gui/containers/digitY4_CustomContainer.hpp>

digitY4_CustomContainer::digitY4_CustomContainer()
{

}

void digitY4_CustomContainer::initialize()
{
    digitY4_CustomContainerBase::initialize();
}

void digitY4_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
