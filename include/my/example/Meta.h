#pragma once

#include <string>

namespace my::example {

class Meta {
    public:
        Meta() = delete;

        /**
         * \brief return library name
         */
        static std::string GetLibraryName();

        /**
         * \brief return library full version string
         */
        static std::string GetLibraryVersionText();

        /**
         * \brief return library version major number
         */
        static std::string GetLibraryVersionMajor();

        /**
         * \brief return library version minor number
         */
        static std::string GetLibraryVersionMinor();

        /**
         * \brief return library version patch number
         */
        static std::string GetLibraryVersionPatch();

        /**
         * \brief return library build date
         */
        static std::string GetLibraryBuildDate();
};

}
