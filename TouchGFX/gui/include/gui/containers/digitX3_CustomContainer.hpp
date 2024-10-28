#ifndef DIGITX3_CUSTOMCONTAINER_HPP
#define DIGITX3_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX3_CustomContainerBase.hpp>

class digitX3_CustomContainer : public digitX3_CustomContainerBase
{
public:
    digitX3_CustomContainer();
    virtual ~digitX3_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX3_CUSTOMCONTAINER_HPP
