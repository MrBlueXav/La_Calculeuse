#ifndef DIGITX1_CUSTOMCONTAINER_HPP
#define DIGITX1_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX1_CustomContainerBase.hpp>

class digitX1_CustomContainer : public digitX1_CustomContainerBase
{
public:
    digitX1_CustomContainer();
    virtual ~digitX1_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX1_CUSTOMCONTAINER_HPP
