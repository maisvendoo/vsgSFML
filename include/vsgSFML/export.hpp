#if defined(vsgSFML_EXPORT)
    #define vsgSFML_LIB __declspec(dllexport)
#elif defined(vsgSFML_IMPORT)
    #define vsgSFML_LIB __declspec(dllimport)
#else
    #define vsgSFML_LIB
#endif
