#include <gui/containers/digitY5_CustomContainer.hpp>

digitY5_CustomContainer::digitY5_CustomContainer()
{

}

void digitY5_CustomContainer::initialize()
{
    digitY5_CustomContainerBase::initialize();
}

void digitY5_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
