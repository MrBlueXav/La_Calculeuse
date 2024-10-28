#include <gui/containers/digitY2_CustomContainer.hpp>

digitY2_CustomContainer::digitY2_CustomContainer()
{

}

void digitY2_CustomContainer::initialize()
{
    digitY2_CustomContainerBase::initialize();
}

void digitY2_CustomContainer::updateText(int16_t value)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9 - value);
    textArea1.invalidate();
}
