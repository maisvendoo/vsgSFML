#include    <vsgSFML/keyboard.hpp>

namespace vsgSFML
{
    KeyboardMap::KeyboardMap() :
        keycodeContinuos{

            // Unknown keyscancode and Space
            {sf::Keyboard::Scancode::Unknown, vsg::KeySymbol::KEY_Undefined},
            {sf::Keyboard::Scancode::Space, vsg::KeySymbol::KEY_Space},

            // Digits
            {sf::Keyboard::Scancode::Num0, vsg::KeySymbol::KEY_0},
            {sf::Keyboard::Scancode::Num1, vsg::KeySymbol::KEY_1},
            {sf::Keyboard::Scancode::Num2, vsg::KeySymbol::KEY_2},
            {sf::Keyboard::Scancode::Num3, vsg::KeySymbol::KEY_3},
            {sf::Keyboard::Scancode::Num4, vsg::KeySymbol::KEY_4},
            {sf::Keyboard::Scancode::Num5, vsg::KeySymbol::KEY_5},
            {sf::Keyboard::Scancode::Num6, vsg::KeySymbol::KEY_6},
            {sf::Keyboard::Scancode::Num7, vsg::KeySymbol::KEY_7},
            {sf::Keyboard::Scancode::Num8, vsg::KeySymbol::KEY_8},
            {sf::Keyboard::Scancode::Num9, vsg::KeySymbol::KEY_9},

            // Latin
            {sf::Keyboard::Scancode::A, vsg::KeySymbol::KEY_A},
            {sf::Keyboard::Scancode::B, vsg::KeySymbol::KEY_B},
            {sf::Keyboard::Scancode::C, vsg::KeySymbol::KEY_C},
            {sf::Keyboard::Scancode::D, vsg::KeySymbol::KEY_D},
            {sf::Keyboard::Scancode::E, vsg::KeySymbol::KEY_E},
            {sf::Keyboard::Scancode::F, vsg::KeySymbol::KEY_F},
            {sf::Keyboard::Scancode::I, vsg::KeySymbol::KEY_I},
            {sf::Keyboard::Scancode::J, vsg::KeySymbol::KEY_J},
            {sf::Keyboard::Scancode::K, vsg::KeySymbol::KEY_K},
            {sf::Keyboard::Scancode::L, vsg::KeySymbol::KEY_L},
            {sf::Keyboard::Scancode::M, vsg::KeySymbol::KEY_M},
            {sf::Keyboard::Scancode::N, vsg::KeySymbol::KEY_N},
            {sf::Keyboard::Scancode::P, vsg::KeySymbol::KEY_P},
            {sf::Keyboard::Scancode::R, vsg::KeySymbol::KEY_R},
            {sf::Keyboard::Scancode::S, vsg::KeySymbol::KEY_S},
            {sf::Keyboard::Scancode::T, vsg::KeySymbol::KEY_T},
            {sf::Keyboard::Scancode::U, vsg::KeySymbol::KEY_U},
            {sf::Keyboard::Scancode::W, vsg::KeySymbol::KEY_W},
            {sf::Keyboard::Scancode::X, vsg::KeySymbol::KEY_X},
            {sf::Keyboard::Scancode::Y, vsg::KeySymbol::KEY_Y},
            {sf::Keyboard::Scancode::Z, vsg::KeySymbol::KEY_Z},
        }
    {

    }

}
