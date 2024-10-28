#ifndef DIGITY5_CUSTOMCONTAINER_HPP
#define DIGITY5_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY5_CustomContainerBase.hpp>

class digitY5_CustomContainer : public digitY5_CustomContainerBase
{
public:
    digitY5_CustomContainer();
    virtual ~digitY5_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY5_CUSTOMCONTAINER_HPP
