#ifndef DIGITX2_CUSTOMCONTAINER_HPP
#define DIGITX2_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX2_CustomContainerBase.hpp>

class digitX2_CustomContainer : public digitX2_CustomContainerBase
{
public:
    digitX2_CustomContainer();
    virtual ~digitX2_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX2_CUSTOMCONTAINER_HPP
