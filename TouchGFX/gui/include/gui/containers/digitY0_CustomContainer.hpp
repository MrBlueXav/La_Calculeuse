#ifndef DIGITY0_CUSTOMCONTAINER_HPP
#define DIGITY0_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitY0_CustomContainerBase.hpp>

class digitY0_CustomContainer : public digitY0_CustomContainerBase
{
public:
    digitY0_CustomContainer();
    virtual ~digitY0_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITY0_CUSTOMCONTAINER_HPP
