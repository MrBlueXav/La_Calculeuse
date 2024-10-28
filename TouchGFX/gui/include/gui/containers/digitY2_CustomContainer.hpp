#ifndef DIGITY2_CUSTOMCONTAINER_HPP
#define DIGITY2_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY2_CustomContainerBase.hpp>

class digitY2_CustomContainer : public digitY2_CustomContainerBase
{
public:
    digitY2_CustomContainer();
    virtual ~digitY2_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY2_CUSTOMCONTAINER_HPP
