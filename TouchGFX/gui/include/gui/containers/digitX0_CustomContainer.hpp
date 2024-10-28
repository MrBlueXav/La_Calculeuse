#ifndef DIGITX0_CUSTOMCONTAINER_HPP
#define DIGITX0_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX0_CustomContainerBase.hpp>

class digitX0_CustomContainer : public digitX0_CustomContainerBase
{
public:
    digitX0_CustomContainer();
    virtual ~digitX0_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX0_CUSTOMCONTAINER_HPP
