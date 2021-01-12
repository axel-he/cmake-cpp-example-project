#include <my/example/Meta.h>
using namespace my;

#include "gtest/gtest.h"

TEST(Meta, LibraryMetaInfo) {
    EXPECT_EQ(example::Meta::GetLibraryName(), "libexample");
    EXPECT_FALSE(example::Meta::GetLibraryBuildDate().empty());
}
