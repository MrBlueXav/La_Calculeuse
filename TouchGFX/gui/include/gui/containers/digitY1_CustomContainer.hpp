#ifndef DIGITY1_CUSTOMCONTAINER_HPP
#define DIGITY1_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY1_CustomContainerBase.hpp>

class digitY1_CustomContainer : public digitY1_CustomContainerBase
{
public:
    digitY1_CustomContainer();
    virtual ~digitY1_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY1_CUSTOMCONTAINER_HPP
