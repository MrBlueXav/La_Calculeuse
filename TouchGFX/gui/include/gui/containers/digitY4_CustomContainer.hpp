#ifndef DIGITY4_CUSTOMCONTAINER_HPP
#define DIGITY4_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY4_CustomContainerBase.hpp>

class digitY4_CustomContainer : public digitY4_CustomContainerBase
{
public:
    digitY4_CustomContainer();
    virtual ~digitY4_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY4_CUSTOMCONTAINER_HPP
