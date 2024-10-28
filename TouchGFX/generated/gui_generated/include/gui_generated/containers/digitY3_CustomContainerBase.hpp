/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DIGITY3_CUSTOMCONTAINERBASE_HPP
#define DIGITY3_CUSTOMCONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class digitY3_CustomContainerBase : public touchgfx::Container
{
public:
    digitY3_CustomContainerBase();
    virtual ~digitY3_CustomContainerBase();
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextAreaWithOneWildcard textArea1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];

private:

};

#endif // DIGITY3_CUSTOMCONTAINERBASE_HPP