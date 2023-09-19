#include    <vsgSFML/keyboard.hpp>

namespace vsgSFML
{
    KeyboardMap::KeyboardMap() :
        keycodeContinuos{
            {sf::Keyboard::Scancode::Unknown, vsg::KeySymbol::KEY_Undefined},
            {sf::Keyboard::Scancode::Space, vsg::KeySymbol::KEY_Space}
        }
    {

    }

}
