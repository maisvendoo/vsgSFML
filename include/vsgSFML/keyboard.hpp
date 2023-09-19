#ifndef     KEYBOARD_HPP
#define     KEYBOARD_HPP

#include    <vsg/ui/KeyEvent.h>

namespace vsgSFML
{
    class KeyboardMap : public vsg::Inherit<vsg::Object, KeyboardMap>
    {
    public:

        KeyboardMap();

        bool getKeySingularly() const;
    };
}

#endif
