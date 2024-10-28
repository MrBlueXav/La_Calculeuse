#ifndef DIGITX5_CUSTOMCONTAINER_HPP
#define DIGITX5_CUSTOMCONTAINER_HPP

#include <gui_generated/containers/digitX5_CustomContainerBase.hpp>

class digitX5_CustomContainer : public digitX5_CustomContainerBase
{
public:
    digitX5_CustomContainer();
    virtual ~digitX5_CustomContainer() {}

    virtual void initialize();
    void updateText(int16_t value);
protected:
};

#endif // DIGITX5_CUSTOMCONTAINER_HPP
