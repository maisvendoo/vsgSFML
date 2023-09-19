#include    <vsgSFML/keyboard.hpp>

namespace vsgSFML
{
    class KeyboardMap : public vsg::Inherit<vsg::Object, KeyboardMap>
    {
    public:

        KeyboardMap();

        bool getKeySingularly() const;
    };
}
