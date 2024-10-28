#ifndef DIGITX4_CUSTOMCONTAINER_HPP
#define DIGITX4_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX4_CustomContainerBase.hpp>

class digitX4_CustomContainer : public digitX4_CustomContainerBase
{
public:
    digitX4_CustomContainer();
    virtual ~digitX4_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX4_CUSTOMCONTAINER_HPP
