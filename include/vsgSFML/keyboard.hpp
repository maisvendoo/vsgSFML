#ifndef     KEYBOARD_HPP
#define     KEYBOARD_HPP

#include    <vsg/ui/KeyEvent.h>
#include    <SFML/Main.hpp>
#include    <SFML/Window.hpp>


namespace vsgSFML
{
    class KeyboardMap : public vsg::Inherit<vsg::Object, KeyboardMap>
    {
    public:

        KeyboardMap();

        bool getKeySingularly() const;

        bool getKeySingularly(const sf::Event *,
                              vsg::KeySymbol &,
                              vsg::KeySymbol &,
                              vsg::KeyModifier &) const;

        bool getKeyContinuosly(const sf::Keyboard::Scancode,
                               vsg::KeySymbol &,
                               vsg::KeySymbol &,
                               vsg::KeyModifier &) const;

        std::unordered_map<sf::Keyboard::Scancode, vsg::KeySymbol> keycodeContinuos;

    private:

        constexpr vsg::KeyModifier getModifier(sf::Uint16) const;

    protected:

        std::unordered_map<sf::Keyboard::Key, vsg::KeySymbol> keycodeSingular;
    };
}

#endif
