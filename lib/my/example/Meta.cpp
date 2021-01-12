#include <my/example/Meta.h>

#include "version.h"

namespace my::example {

/**
 * \brief return library name
 */
std::string Meta::GetLibraryName() {
    return LIB_NAME;
}

/**
 * \brief return library full version string
 */
std::string Meta::GetLibraryVersionText() {
    return LIB_VERSION;
}

/**
 * \brief return library version major number
 */
std::string Meta::GetLibraryVersionMajor() {
    return LIB_VERSION_MAJOR;
}

/**
 * \brief return library version minor number
 */
std::string Meta::GetLibraryVersionMinor() {
    return LIB_VERSION_MINOR;
}

/**
 * \brief return library version patch number
 */
std::string Meta::GetLibraryVersionPatch() {
    return LIB_VERSION_PATCH;
}

/**
 * \brief return library build date
 */
std::string Meta::GetLibraryBuildDate() {
    return LIB_BUILD_DATE;
}

}
