#include <gui/containers/digitY3_CustomContainer.hpp>

digitY3_CustomContainer::digitY3_CustomContainer()
{

}

void digitY3_CustomContainer::initialize()
{
    digitY3_CustomContainerBase::initialize();
}

void digitY3_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
