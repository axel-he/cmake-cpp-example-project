#include <my/example/Meta.h>
using namespace my;

#include <iostream>

int main(int argc, char* argv[]) {

    std::cout << "Library: "
        << example::Meta::GetLibraryName()
        << " v" << example::Meta::GetLibraryVersionText()
        << " (" << example::Meta::GetLibraryBuildDate() << ")"
        << std::endl;

    return 0;
}
