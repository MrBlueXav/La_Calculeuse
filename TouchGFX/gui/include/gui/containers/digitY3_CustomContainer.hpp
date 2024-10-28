#ifndef DIGITY3_CUSTOMCONTAINER_HPP
#define DIGITY3_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY3_CustomContainerBase.hpp>

class digitY3_CustomContainer : public digitY3_CustomContainerBase
{
public:
    digitY3_CustomContainer();
    virtual ~digitY3_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY3_CUSTOMCONTAINER_HPP
